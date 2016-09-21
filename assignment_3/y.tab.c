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
#define ID 270
#define NUMBER 271
#define YYERRCODE 256
static const short yylhs[] = {                           -1,
    0,    0,    0,    1,    3,    3,    3,    3,    4,    4,
    5,    7,    2,    8,    9,    2,   11,    6,   12,    6,
    6,   14,   10,   15,   10,   10,   13,   13,   13,
};
static const short yylen[] = {                            2,
    1,    2,    2,    2,    1,    1,    1,    1,    2,    3,
    0,    0,    6,    0,    0,    7,    0,    4,    0,    4,
    1,    0,    4,    0,    4,    1,    3,    1,    1,
};
static const short yydefred[] = {                         0,
    5,    6,    7,    8,    0,    1,    0,   11,    2,    3,
    0,    4,    0,    0,    0,    9,   12,   15,   10,    0,
    0,    0,   29,   28,    0,    0,   26,    0,    0,   13,
   17,   19,   24,   22,    0,   27,    0,    0,    0,    0,
   16,    0,    0,   25,   23,
};
static const short yydgoto[] = {                          5,
    6,   10,    7,   12,   13,   25,   20,   14,   21,   26,
   37,   38,   27,   40,   39,
};
static const short yysindex[] = {                      -252,
    0,    0,    0,    0, -257,    0, -261,    0,    0,    0,
 -238,    0, -232, -223, -261,    0,    0,    0,    0, -260,
 -260, -260,    0,    0, -250, -227,    0, -231, -228,    0,
    0,    0,    0,    0, -220,    0, -260, -260, -260, -260,
    0, -227, -227,    0,    0,
};
static const short yyrindex[] = {                         0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0, -247,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0, -240, -233,    0,    0,
};
static const short yygindex[] = {                         0,
   42,   16,    0,   37,    0,   22,    0,    0,    0,    8,
    0,    0,    9,    0,    0,
};
#define YYTABLESIZE 52
static const short yytable[] = {                          1,
    2,    3,    4,   22,    1,    2,    3,    4,   11,   23,
   24,   30,    8,   21,   21,   31,   32,   21,   21,   21,
   18,   18,   15,   16,   18,   18,   18,   20,   20,   35,
   17,   20,   20,   20,   31,   32,   36,   31,   32,   18,
   33,   34,   28,   29,   42,   43,    9,   44,   45,    8,
   41,   19,
};
static const short yycheck[] = {                        257,
  258,  259,  260,  264,  257,  258,  259,  260,  270,  270,
  271,  262,  270,  261,  262,  266,  267,  265,  266,  267,
  261,  262,  261,  262,  265,  266,  267,  261,  262,  261,
  263,  265,  266,  267,  266,  267,  265,  266,  267,  263,
  268,  269,   21,   22,   37,   38,    5,   39,   40,  270,
   35,   15,
};
#define YYFINAL 5
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 271
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
"MULT","ID","NUMBER",
};
static const char *yyrule[] = {
"$accept : EXPRESSION",
"EXPRESSION : DECLARATION_STATEMENT",
"EXPRESSION : EXPRESSION DECLARATION_STATEMENT",
"EXPRESSION : EXPRESSION ASSIGNMENT_STATEMENT",
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
"$$5 :",
"ARITHMETIC_EXPRESSION : ARITHMETIC_EXPRESSION PLUS $$5 TERM",
"$$6 :",
"ARITHMETIC_EXPRESSION : ARITHMETIC_EXPRESSION MONUS $$6 TERM",
"ARITHMETIC_EXPRESSION : TERM",
"$$7 :",
"TERM : TERM MULT $$7 FUNCTION",
"$$8 :",
"TERM : TERM DIV $$8 FUNCTION",
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
#line 54 "parse_tree.y"
		

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


/*-----------------------------------------------------------------------------------------------------------*/	
	
	
	
	
	
	
	
	
	

#line 518 "y.tab.c"

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
case 5:
#line 25 "parse_tree.y"
	{id_type = "INT";}
break;
case 6:
#line 26 "parse_tree.y"
	{id_type = "FLOAT";}
break;
case 7:
#line 27 "parse_tree.y"
	{id_type = "DOUBLE";}
break;
case 8:
#line 28 "parse_tree.y"
	{id_type = "CHAR";}
break;
case 9:
#line 31 "parse_tree.y"
	{id_func(yystack.l_mark[-1].strval);}
break;
case 10:
#line 32 "parse_tree.y"
	{id_func(yystack.l_mark[-2].strval);}
break;
case 11:
#line 35 "parse_tree.y"
	{check_id(yystack.l_mark[0].strval); push(yystack.l_mark[0].strval);}
break;
case 12:
#line 35 "parse_tree.y"
	{push("=");}
break;
case 13:
#line 35 "parse_tree.y"
	{codegen_assign();}
break;
case 14:
#line 36 "parse_tree.y"
	{check_id(yystack.l_mark[0].strval); push(yystack.l_mark[0].strval);}
break;
case 15:
#line 36 "parse_tree.y"
	{push("=");}
break;
case 16:
#line 36 "parse_tree.y"
	{codegen_assign();}
break;
case 17:
#line 39 "parse_tree.y"
	{push("+");}
break;
case 18:
#line 39 "parse_tree.y"
	{codegen();}
break;
case 19:
#line 40 "parse_tree.y"
	{push("-");}
break;
case 20:
#line 40 "parse_tree.y"
	{codegen();}
break;
case 22:
#line 44 "parse_tree.y"
	{push("*");}
break;
case 23:
#line 44 "parse_tree.y"
	{codegen();}
break;
case 24:
#line 45 "parse_tree.y"
	{push("/");}
break;
case 25:
#line 45 "parse_tree.y"
	{codegen();}
break;
case 28:
#line 50 "parse_tree.y"
	{push(yystack.l_mark[0].numval);}
break;
case 29:
#line 51 "parse_tree.y"
	{check_id(yystack.l_mark[0].strval); push(yystack.l_mark[0].strval);}
break;
#line 812 "y.tab.c"
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
