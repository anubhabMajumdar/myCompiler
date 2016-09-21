#ifndef lint
static const char yysccsid[] = "@(#)yaccpar	1.9 (Berkeley) 02/21/93";
#endif

#define YYBYACC 1
#define YYMAJOR 1
#define YYMINOR 9
#define YYPATCH 20121003

#define YYEMPTY        (-1)
#define yyclearin      (yychar = YYEMPTY)
#define yyerrok        (yyerrflag = 0)
#define YYRECOVERING() (yyerrflag != 0)

#define YYPREFIX "yy"

#define YYPURE 0

#line 2 "parse_tree.y"
#include <stdio.h>

char * id_type;
char * id_table;

#line 9 "parse_tree.y"
#ifdef YYSTYPE
#undef  YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#endif
#ifndef YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
typedef union {char *strval;char *numval;} YYSTYPE;
#endif /* !YYSTYPE_IS_DECLARED */
#line 34 "y.tab.c"

/* compatibility with bison */
#ifdef YYPARSE_PARAM
/* compatibility with FreeBSD */
# ifdef YYPARSE_PARAM_TYPE
#  define YYPARSE_DECL() yyparse(YYPARSE_PARAM_TYPE YYPARSE_PARAM)
# else
#  define YYPARSE_DECL() yyparse(void *YYPARSE_PARAM)
# endif
#else
# define YYPARSE_DECL() yyparse(void)
#endif

/* Parameters sent to lex. */
#ifdef YYLEX_PARAM
# define YYLEX_DECL() yylex(void *YYLEX_PARAM)
# define YYLEX yylex(YYLEX_PARAM)
#else
# define YYLEX_DECL() yylex(void)
# define YYLEX yylex()
#endif

/* Parameters sent to yyerror. */
#ifndef YYERROR_DECL
#define YYERROR_DECL() yyerror(const char *s)
#endif
#ifndef YYERROR_CALL
#define YYERROR_CALL(msg) yyerror(msg)
#endif

extern int YYPARSE_DECL();

#define INT 257
#define FLOAT 258
#define DOUBLE 259
#define CHAR 260
#define COMMA 261
#define SEMICOLON 262
#define EQUAL 263
#define BRACKET_OPEN 264
#define BRACKET_CLOSE 265
#define PLUS 266
#define MONUS 267
#define DIV 268
#define MULT 269
#define IF 270
#define ELSE 271
#define CURLY_OPEN 272
#define CURLY_CLOSE 273
#define GT 274
#define LT 275
#define WHILE 276
#define BREAK 277
#define CONTINUE 278
#define ID 279
#define NUMBER 280
#define YYERRCODE 256
static const short yylhs[] = {                           -1,
    0,    0,    0,    0,    0,    1,    5,    5,    5,    5,
    6,    6,    7,    9,    2,   10,   11,    2,    2,   12,
   14,    3,   13,   17,   18,   16,   16,   19,   20,    4,
   21,   15,   22,   15,   15,   15,   15,   15,   24,    8,
   25,    8,   26,    8,   27,    8,   28,    8,   29,    8,
   30,    8,    8,   32,   23,   33,   23,   23,   31,   31,
   31,
};
static const short yylen[] = {                            2,
    1,    2,    2,    2,    2,    2,    1,    1,    1,    1,
    2,    3,    0,    0,    6,    0,    0,    7,    2,    0,
    0,   10,    1,    0,    0,    6,    0,    0,    0,    9,
    0,    4,    0,    4,    1,    2,    2,    0,    0,    5,
    0,    5,    0,    4,    0,    4,    0,    4,    0,    4,
    0,    3,    1,    0,    4,    0,    4,    1,    3,    1,
    1,
};
static const short yydefred[] = {                         0,
    7,    8,    9,   10,    0,    1,    0,    0,   51,   20,
   28,    0,   60,    2,    3,    4,    5,    0,    0,   58,
    0,    6,   61,    0,    0,    0,    0,    0,    0,   19,
   47,   49,    0,    0,   56,   54,    0,   11,   59,    0,
    0,    0,   14,   17,    0,    0,   39,    0,   41,    0,
    0,    0,   12,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,   57,   55,   21,   29,    0,    0,
    0,    0,    0,    0,   15,    0,    0,    0,   18,    0,
    0,   35,    0,    0,    0,    0,   33,   31,   36,   37,
    0,   30,    0,    0,   22,    0,   34,   32,   25,    0,
    0,    0,   26,
};
static const short yydgoto[] = {                          5,
    6,   82,   83,   84,    7,   22,   28,   18,   57,   29,
   58,   26,   55,   73,   85,   95,   96,  100,   27,   74,
   94,   93,   19,   61,   63,   48,   50,   45,   46,   25,
   20,   52,   51,
};
static const short yysindex[] = {                       -55,
    0,    0,    0,    0, -249,    0, -267, -260,    0,    0,
    0,    0,    0,    0,    0,    0,    0, -104, -252,    0,
 -228,    0,    0,  -77, -220, -242, -239, -234, -223,    0,
    0,    0, -217, -191,    0,    0, -267,    0,    0, -252,
 -260, -260,    0,    0, -220, -220,    0, -220,    0, -220,
 -220, -220,    0, -261, -216,  -74, -260, -260, -252, -252,
 -220, -252, -220, -252,    0,    0,    0,    0,  -80, -100,
 -252, -252, -229, -199,    0, -222, -214, -214,    0, -181,
 -180,    0, -214, -214, -190, -189,    0,    0,    0,    0,
    0,    0, -214, -214,    0, -179,    0,    0,    0, -178,
 -214, -170,    0,
};
static const short yyrindex[] = {                         0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,  -90,    0,    0,    0,    0,    0,    0, -187,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0, -210, -203,    0,    0,    0,    0,    0, -176,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0, -172,    0,    0,    0,    0, -165, -154,
    0, -143,    0, -132,    0,    0,    0,    0,    0,    0,
 -121, -110,    0,    0,    0,    0, -169, -169,    0,    0,
    0,    0, -169, -169,    0,    0,    0,    0,    0,    0,
    1,    0, -169, -169,    0,    0,    0,    0,    0,    0,
 -169,    0,    0,
};
static const short yygindex[] = {                         0,
   90,   -5,  100,  101,    0,   77,    0,   -6,    0,    0,
    0,    0,    0,    0,  -46,    0,    0,    0,    0,    0,
    0,    0,  -22,    0,    0,    0,    0,    0,    0,    0,
   16,    0,    0,
};
#define YYTABLESIZE 281
static const short yytable[] = {                         15,
   27,   24,   40,    8,   31,   32,    9,    1,    2,    3,
    4,   21,   33,   34,    8,   35,   36,    9,   23,   13,
   10,   41,   59,   60,   42,   62,   11,   64,   43,   12,
   13,   86,   37,   38,   54,   56,   89,   90,   71,   44,
   72,    8,   77,    8,    9,   47,   97,   98,   67,    8,
   69,   70,    9,   43,  102,   10,   12,   13,   23,   13,
   45,   11,   80,   81,   12,   13,   65,   66,   43,   43,
   79,   49,   78,   53,   53,   45,   45,   53,   53,   53,
   87,   88,   91,   92,   52,   52,   53,   53,   52,   52,
   52,   99,   23,  101,   14,   48,   48,   52,   52,   48,
   48,   48,  103,   38,   16,   17,   50,   50,   48,   48,
   50,   50,   50,   53,    0,    0,    0,   44,   44,   50,
   50,   44,   44,   44,    0,    0,    0,    0,   46,   46,
   44,   44,   46,   46,   46,    0,    0,    0,    0,   40,
   40,   46,   46,   40,   40,   40,    0,    0,    0,    0,
   42,   42,   40,   40,   42,   42,   42,   30,    0,    0,
   76,   31,   32,   42,   42,   31,   32,    0,    0,   33,
   34,   61,   13,   33,   34,   61,   61,   61,   61,    0,
    0,   75,    0,   61,   61,   31,   32,   39,   31,   32,
   68,   31,   32,   33,   34,    0,   33,   34,    0,   33,
   34,    1,    2,    3,    4,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,   27,   27,   27,
   27,    0,    0,    0,   27,    0,    0,   27,    0,    0,
   27,   24,    0,   27,    0,    0,   27,   27,   27,   27,
   27,
};
static const short yycheck[] = {                          5,
    0,    8,   25,  264,  266,  267,  267,  257,  258,  259,
  260,  279,  274,  275,  264,  268,  269,  267,  279,  280,
  270,  264,   45,   46,  264,   48,  276,   50,  263,  279,
  280,   78,  261,  262,   41,   42,   83,   84,   61,  263,
   63,  264,  272,  264,  267,  263,   93,   94,  265,  264,
   57,   58,  267,  264,  101,  270,  279,  280,  279,  280,
  264,  276,  277,  278,  279,  280,   51,   52,  279,  280,
   76,  263,  272,  261,  262,  279,  280,  265,  266,  267,
  262,  262,  273,  273,  261,  262,  274,  275,  265,  266,
  267,  271,  265,  272,    5,  261,  262,  274,  275,  265,
  266,  267,  273,  273,    5,    5,  261,  262,  274,  275,
  265,  266,  267,   37,   -1,   -1,   -1,  261,  262,  274,
  275,  265,  266,  267,   -1,   -1,   -1,   -1,  261,  262,
  274,  275,  265,  266,  267,   -1,   -1,   -1,   -1,  261,
  262,  274,  275,  265,  266,  267,   -1,   -1,   -1,   -1,
  261,  262,  274,  275,  265,  266,  267,  262,   -1,   -1,
  261,  266,  267,  274,  275,  266,  267,   -1,   -1,  274,
  275,  262,  263,  274,  275,  266,  267,  268,  269,   -1,
   -1,  262,   -1,  274,  275,  266,  267,  265,  266,  267,
  265,  266,  267,  274,  275,   -1,  274,  275,   -1,  274,
  275,  257,  258,  259,  260,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,  257,  258,  259,
  260,   -1,   -1,   -1,  264,   -1,   -1,  267,   -1,   -1,
  270,  271,   -1,  273,   -1,   -1,  276,  277,  278,  279,
  280,
};
#define YYFINAL 5
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 280
#if YYDEBUG
static const char *yyname[] = {

"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"INT","FLOAT","DOUBLE","CHAR",
"COMMA","SEMICOLON","EQUAL","BRACKET_OPEN","BRACKET_CLOSE","PLUS","MONUS","DIV",
"MULT","IF","ELSE","CURLY_OPEN","CURLY_CLOSE","GT","LT","WHILE","BREAK",
"CONTINUE","ID","NUMBER",
};
static const char *yyrule[] = {
"$accept : EXPRESSION",
"EXPRESSION : DECLARATION_STATEMENT",
"EXPRESSION : EXPRESSION DECLARATION_STATEMENT",
"EXPRESSION : EXPRESSION ASSIGNMENT_STATEMENT",
"EXPRESSION : EXPRESSION CONDITIONAL",
"EXPRESSION : EXPRESSION WHILELOOP",
"DECLARATION_STATEMENT : TYPE DECLARE",
"TYPE : INT",
"TYPE : FLOAT",
"TYPE : DOUBLE",
"TYPE : CHAR",
"DECLARE : ID SEMICOLON",
"DECLARE : ID COMMA DECLARE",
"$$1 :",
"$$2 :",
"ASSIGNMENT_STATEMENT : ID $$1 EQUAL $$2 ARITHMETIC_EXPRESSION SEMICOLON",
"$$3 :",
"$$4 :",
"ASSIGNMENT_STATEMENT : ID $$3 EQUAL $$4 ARITHMETIC_EXPRESSION COMMA ASSIGNMENT_STATEMENT",
"ASSIGNMENT_STATEMENT : ARITHMETIC_EXPRESSION SEMICOLON",
"$$5 :",
"$$6 :",
"CONDITIONAL : IF $$5 BRACKET_OPEN IF_CONDITION BRACKET_CLOSE $$6 CURLY_OPEN IN_BRACES CURLY_CLOSE CONDITIONAL_ELSE",
"IF_CONDITION : ARITHMETIC_EXPRESSION",
"$$7 :",
"$$8 :",
"CONDITIONAL_ELSE : $$7 ELSE $$8 CURLY_OPEN IN_BRACES CURLY_CLOSE",
"CONDITIONAL_ELSE :",
"$$9 :",
"$$10 :",
"WHILELOOP : WHILE $$9 BRACKET_OPEN ARITHMETIC_EXPRESSION BRACKET_CLOSE $$10 CURLY_OPEN IN_BRACES CURLY_CLOSE",
"$$11 :",
"IN_BRACES : CONTINUE SEMICOLON $$11 IN_BRACES",
"$$12 :",
"IN_BRACES : BREAK SEMICOLON $$12 IN_BRACES",
"IN_BRACES : ASSIGNMENT_STATEMENT",
"IN_BRACES : CONDITIONAL IN_BRACES",
"IN_BRACES : WHILELOOP IN_BRACES",
"IN_BRACES :",
"$$13 :",
"ARITHMETIC_EXPRESSION : ARITHMETIC_EXPRESSION GT EQUAL $$13 TERM",
"$$14 :",
"ARITHMETIC_EXPRESSION : ARITHMETIC_EXPRESSION LT EQUAL $$14 TERM",
"$$15 :",
"ARITHMETIC_EXPRESSION : ARITHMETIC_EXPRESSION GT $$15 TERM",
"$$16 :",
"ARITHMETIC_EXPRESSION : ARITHMETIC_EXPRESSION LT $$16 TERM",
"$$17 :",
"ARITHMETIC_EXPRESSION : ARITHMETIC_EXPRESSION PLUS $$17 TERM",
"$$18 :",
"ARITHMETIC_EXPRESSION : ARITHMETIC_EXPRESSION MONUS $$18 TERM",
"$$19 :",
"ARITHMETIC_EXPRESSION : MONUS $$19 TERM",
"ARITHMETIC_EXPRESSION : TERM",
"$$20 :",
"TERM : TERM MULT $$20 FUNCTION",
"$$21 :",
"TERM : TERM DIV $$21 FUNCTION",
"TERM : FUNCTION",
"FUNCTION : BRACKET_OPEN ARITHMETIC_EXPRESSION BRACKET_CLOSE",
"FUNCTION : NUMBER",
"FUNCTION : ID",

};
#endif

int      yydebug;
int      yynerrs;

int      yyerrflag;
int      yychar;
YYSTYPE  yyval;
YYSTYPE  yylval;

/* define the initial stack-sizes */
#ifdef YYSTACKSIZE
#undef YYMAXDEPTH
#define YYMAXDEPTH  YYSTACKSIZE
#else
#ifdef YYMAXDEPTH
#define YYSTACKSIZE YYMAXDEPTH
#else
#define YYSTACKSIZE 500
#define YYMAXDEPTH  500
#endif
#endif

#define YYINITSTACKSIZE 500

typedef struct {
    unsigned stacksize;
    short    *s_base;
    short    *s_mark;
    short    *s_last;
    YYSTYPE  *l_base;
    YYSTYPE  *l_mark;
} YYSTACKDATA;
/* variables for the parser stack */
static YYSTACKDATA yystack;
#line 88 "parse_tree.y"
		

void yyerror(char *s)
{
fprintf(stderr,"%s\n",s);
return;
}

int main(void)
{
	initialize();
	
	printf("Generating Intermidiate Code.....\n");
	
	yyparse();

	printf("Parsing Successful! Generating symbol table.....\n");
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
	printf("IF t%d goto L%d1\ngoto L%d2\nL%d1:\n", tint-1, l_index, l_index, l_index);	
}	
	
	
	
	
	
	
	

#line 646 "y.tab.c"

#if YYDEBUG
#include <stdio.h>		/* needed for printf */
#endif

#include <stdlib.h>	/* needed for malloc, etc */
#include <string.h>	/* needed for memset */

/* allocate initial stack or double stack size, up to YYMAXDEPTH */
static int yygrowstack(YYSTACKDATA *data)
{
    int i;
    unsigned newsize;
    short *newss;
    YYSTYPE *newvs;

    if ((newsize = data->stacksize) == 0)
        newsize = YYINITSTACKSIZE;
    else if (newsize >= YYMAXDEPTH)
        return -1;
    else if ((newsize *= 2) > YYMAXDEPTH)
        newsize = YYMAXDEPTH;

    i = data->s_mark - data->s_base;
    newss = (short *)realloc(data->s_base, newsize * sizeof(*newss));
    if (newss == 0)
        return -1;

    data->s_base = newss;
    data->s_mark = newss + i;

    newvs = (YYSTYPE *)realloc(data->l_base, newsize * sizeof(*newvs));
    if (newvs == 0)
        return -1;

    data->l_base = newvs;
    data->l_mark = newvs + i;

    data->stacksize = newsize;
    data->s_last = data->s_base + newsize - 1;
    return 0;
}

#if YYPURE || defined(YY_NO_LEAKS)
static void yyfreestack(YYSTACKDATA *data)
{
    free(data->s_base);
    free(data->l_base);
    memset(data, 0, sizeof(*data));
}
#else
#define yyfreestack(data) /* nothing */
#endif

#define YYABORT  goto yyabort
#define YYREJECT goto yyabort
#define YYACCEPT goto yyaccept
#define YYERROR  goto yyerrlab

int
YYPARSE_DECL()
{
    int yym, yyn, yystate;
#if YYDEBUG
    const char *yys;

    if ((yys = getenv("YYDEBUG")) != 0)
    {
        yyn = *yys;
        if (yyn >= '0' && yyn <= '9')
            yydebug = yyn - '0';
    }
#endif

    yynerrs = 0;
    yyerrflag = 0;
    yychar = YYEMPTY;
    yystate = 0;

#if YYPURE
    memset(&yystack, 0, sizeof(yystack));
#endif

    if (yystack.s_base == NULL && yygrowstack(&yystack)) goto yyoverflow;
    yystack.s_mark = yystack.s_base;
    yystack.l_mark = yystack.l_base;
    yystate = 0;
    *yystack.s_mark = 0;

yyloop:
    if ((yyn = yydefred[yystate]) != 0) goto yyreduce;
    if (yychar < 0)
    {
        if ((yychar = YYLEX) < 0) yychar = 0;
#if YYDEBUG
        if (yydebug)
        {
            yys = 0;
            if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
            if (!yys) yys = "illegal-symbol";
            printf("%sdebug: state %d, reading %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
    }
    if ((yyn = yysindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: state %d, shifting to state %d\n",
                    YYPREFIX, yystate, yytable[yyn]);
#endif
        if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack))
        {
            goto yyoverflow;
        }
        yystate = yytable[yyn];
        *++yystack.s_mark = yytable[yyn];
        *++yystack.l_mark = yylval;
        yychar = YYEMPTY;
        if (yyerrflag > 0)  --yyerrflag;
        goto yyloop;
    }
    if ((yyn = yyrindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
        yyn = yytable[yyn];
        goto yyreduce;
    }
    if (yyerrflag) goto yyinrecovery;

    yyerror("syntax error");

    goto yyerrlab;

yyerrlab:
    ++yynerrs;

yyinrecovery:
    if (yyerrflag < 3)
    {
        yyerrflag = 3;
        for (;;)
        {
            if ((yyn = yysindex[*yystack.s_mark]) && (yyn += YYERRCODE) >= 0 &&
                    yyn <= YYTABLESIZE && yycheck[yyn] == YYERRCODE)
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: state %d, error recovery shifting\
 to state %d\n", YYPREFIX, *yystack.s_mark, yytable[yyn]);
#endif
                if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack))
                {
                    goto yyoverflow;
                }
                yystate = yytable[yyn];
                *++yystack.s_mark = yytable[yyn];
                *++yystack.l_mark = yylval;
                goto yyloop;
            }
            else
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: error recovery discarding state %d\n",
                            YYPREFIX, *yystack.s_mark);
#endif
                if (yystack.s_mark <= yystack.s_base) goto yyabort;
                --yystack.s_mark;
                --yystack.l_mark;
            }
        }
    }
    else
    {
        if (yychar == 0) goto yyabort;
#if YYDEBUG
        if (yydebug)
        {
            yys = 0;
            if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
            if (!yys) yys = "illegal-symbol";
            printf("%sdebug: state %d, error recovery discards token %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
        yychar = YYEMPTY;
        goto yyloop;
    }

yyreduce:
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: state %d, reducing by rule %d (%s)\n",
                YYPREFIX, yystate, yyn, yyrule[yyn]);
#endif
    yym = yylen[yyn];
    if (yym)
        yyval = yystack.l_mark[1-yym];
    else
        memset(&yyval, 0, sizeof yyval);
    switch (yyn)
    {
case 7:
#line 27 "parse_tree.y"
	{id_type = "INT";}
break;
case 8:
#line 28 "parse_tree.y"
	{id_type = "FLOAT";}
break;
case 9:
#line 29 "parse_tree.y"
	{id_type = "DOUBLE";}
break;
case 10:
#line 30 "parse_tree.y"
	{id_type = "CHAR";}
break;
case 11:
#line 33 "parse_tree.y"
	{id_func(yystack.l_mark[-1].strval);}
break;
case 12:
#line 34 "parse_tree.y"
	{id_func(yystack.l_mark[-2].strval);}
break;
case 13:
#line 37 "parse_tree.y"
	{check_id(yystack.l_mark[0].strval); push(yystack.l_mark[0].strval);}
break;
case 14:
#line 37 "parse_tree.y"
	{push("=");}
break;
case 15:
#line 37 "parse_tree.y"
	{codegen_assign();}
break;
case 16:
#line 38 "parse_tree.y"
	{check_id(yystack.l_mark[0].strval); push(yystack.l_mark[0].strval);}
break;
case 17:
#line 38 "parse_tree.y"
	{push("=");}
break;
case 18:
#line 38 "parse_tree.y"
	{codegen_assign();}
break;
case 20:
#line 43 "parse_tree.y"
	{l_index++;}
break;
case 21:
#line 43 "parse_tree.y"
	{if_func();}
break;
case 24:
#line 50 "parse_tree.y"
	{printf("goto L%d3\n", l_index);}
break;
case 25:
#line 50 "parse_tree.y"
	{printf("L%d2:\n", l_index);}
break;
case 26:
#line 50 "parse_tree.y"
	{printf("L%d3:\n", l_index); l_index--;}
break;
case 27:
#line 51 "parse_tree.y"
	{printf("L%d2:\n", l_index); l_index--;}
break;
case 28:
#line 54 "parse_tree.y"
	{w_index++; }
break;
case 29:
#line 54 "parse_tree.y"
	{printf("W%d0:\t", w_index);printf("IF t%d goto W%d1\ngoto W%d2\nW%d1:", tint-1, w_index, w_index, w_index);}
break;
case 30:
#line 54 "parse_tree.y"
	{printf("goto W%d0\nW%d2:\n", w_index, w_index); w_index--;}
break;
case 31:
#line 58 "parse_tree.y"
	{printf("goto W%d0\n",w_index);}
break;
case 33:
#line 59 "parse_tree.y"
	{printf("goto W%d2\n",w_index);}
break;
case 39:
#line 68 "parse_tree.y"
	{push(">=");}
break;
case 40:
#line 68 "parse_tree.y"
	{codegen();}
break;
case 41:
#line 69 "parse_tree.y"
	{push("<=");}
break;
case 42:
#line 69 "parse_tree.y"
	{codegen();}
break;
case 43:
#line 70 "parse_tree.y"
	{push(">");}
break;
case 44:
#line 70 "parse_tree.y"
	{codegen();}
break;
case 45:
#line 71 "parse_tree.y"
	{push("<");}
break;
case 46:
#line 71 "parse_tree.y"
	{codegen();}
break;
case 47:
#line 72 "parse_tree.y"
	{push("+");}
break;
case 48:
#line 72 "parse_tree.y"
	{codegen();}
break;
case 49:
#line 73 "parse_tree.y"
	{push("-");}
break;
case 50:
#line 73 "parse_tree.y"
	{codegen();}
break;
case 51:
#line 74 "parse_tree.y"
	{push("-");}
break;
case 52:
#line 74 "parse_tree.y"
	{codegen_umin();}
break;
case 54:
#line 78 "parse_tree.y"
	{push("*");}
break;
case 55:
#line 78 "parse_tree.y"
	{codegen();}
break;
case 56:
#line 79 "parse_tree.y"
	{push("/");}
break;
case 57:
#line 79 "parse_tree.y"
	{codegen();}
break;
case 60:
#line 84 "parse_tree.y"
	{push(yystack.l_mark[0].numval);}
break;
case 61:
#line 85 "parse_tree.y"
	{check_id(yystack.l_mark[0].strval); push(yystack.l_mark[0].strval);}
break;
#line 1024 "y.tab.c"
    }
    yystack.s_mark -= yym;
    yystate = *yystack.s_mark;
    yystack.l_mark -= yym;
    yym = yylhs[yyn];
    if (yystate == 0 && yym == 0)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: after reduction, shifting from state 0 to\
 state %d\n", YYPREFIX, YYFINAL);
#endif
        yystate = YYFINAL;
        *++yystack.s_mark = YYFINAL;
        *++yystack.l_mark = yyval;
        if (yychar < 0)
        {
            if ((yychar = YYLEX) < 0) yychar = 0;
#if YYDEBUG
            if (yydebug)
            {
                yys = 0;
                if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
                if (!yys) yys = "illegal-symbol";
                printf("%sdebug: state %d, reading %d (%s)\n",
                        YYPREFIX, YYFINAL, yychar, yys);
            }
#endif
        }
        if (yychar == 0) goto yyaccept;
        goto yyloop;
    }
    if ((yyn = yygindex[yym]) && (yyn += yystate) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yystate)
        yystate = yytable[yyn];
    else
        yystate = yydgoto[yym];
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: after reduction, shifting from state %d \
to state %d\n", YYPREFIX, *yystack.s_mark, yystate);
#endif
    if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack))
    {
        goto yyoverflow;
    }
    *++yystack.s_mark = (short) yystate;
    *++yystack.l_mark = yyval;
    goto yyloop;

yyoverflow:
    yyerror("yacc stack overflow");

yyabort:
    yyfreestack(&yystack);
    return (1);

yyaccept:
    yyfreestack(&yystack);
    return (0);
}
