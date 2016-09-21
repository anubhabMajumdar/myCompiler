#ifndef lint
static const char yysccsid[] = "@(#)yaccpar	1.9 (Berkeley) 02/21/93";
#endif

#define YYBYACC 1
#define YYMAJOR 1
#define YYMINOR 9
#define YYPATCH 20140101

#define YYEMPTY        (-1)
#define yyclearin      (yychar = YYEMPTY)
#define yyerrok        (yyerrflag = 0)
#define YYRECOVERING() (yyerrflag != 0)

#define YYPREFIX "yy"

#define YYPURE 0

#line 2 "analyze_i_code.y"
#include <stdio.h>
#line 5 "analyze_i_code.y"
#ifdef YYSTYPE
#undef  YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#endif
#ifndef YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
typedef union {char *strval;char *numval;char *labelval;} YYSTYPE;
#endif /* !YYSTYPE_IS_DECLARED */
#line 30 "y.tab.c"

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
#define GOTO 279
#define EGOTO 280
#define IGOTO 281
#define ID 282
#define NUMBER 283
#define LABEL 284
#define YYERRCODE 256
static const short yylhs[] = {                           -1,
    0,    0,    0,    0,    0,    1,    1,    2,    2,    2,
    2,    5,    5,    5,    5,    6,    6,    3,    4,    4,
    4,    4,
};
static const short yylen[] = {                            2,
    2,    2,    2,    2,    0,    4,    4,    6,    6,    6,
    6,    1,    1,    1,    1,    1,    1,    2,    2,    2,
    2,    2,
};
static const short yydefred[] = {                         5,
    0,    0,    0,    0,    0,    0,    1,    2,    3,    4,
   19,   22,   21,   20,    0,   18,    0,    0,    7,   12,
   13,   15,   14,   17,   16,    0,    0,    8,    9,   10,
   11,
};
static const short yydgoto[] = {                          6,
    7,    8,    9,   10,   26,   27,
};
static const short yysindex[] = {                         0,
 -264, -279, -277, -269, -254, -270,    0,    0,    0,    0,
    0,    0,    0,    0, -234,    0, -275, -248,    0,    0,
    0,    0,    0,    0,    0, -260, -258,    0,    0,    0,
    0,
};
static const short yyrindex[] = {                         0,
 -280,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    1,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,
};
static const short yygindex[] = {                        30,
    0,    0,    0,    0,    0,    0,
};
#define YYTABLESIZE 285
static const short yytable[] = {                          2,
    6,    5,   11,    5,   12,    2,   18,   19,    3,    4,
    5,   15,   13,   16,    3,    4,    5,   20,   21,   22,
   23,   28,   29,   30,   31,   24,   25,   14,   17,    1,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    6,    0,    0,    0,    0,    0,    0,    0,    0,    6,
    6,    6,    6,    0,    6,
};
static const short yycheck[] = {                        270,
    0,  282,  282,  284,  282,  270,  282,  283,  279,  280,
  281,  282,  282,  284,  279,  280,  281,  266,  267,  268,
  269,  282,  283,  282,  283,  274,  275,  282,  263,    0,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
  270,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  279,
  280,  281,  282,   -1,  284,
};
#define YYFINAL 1
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 284
#define YYTRANSLATE(a) ((a) > YYMAXTOKEN ? (YYMAXTOKEN + 1) : (a))
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
"CONTINUE","GOTO","EGOTO","IGOTO","ID","NUMBER","LABEL","illegal-symbol",
};
static const char *yyrule[] = {
"$accept : LINES",
"LINES : LINES ASSIGN",
"LINES : LINES ARITHMATIC",
"LINES : LINES GOT_LABEL",
"LINES : LINES CONDITION",
"LINES :",
"ASSIGN : LINES ID EQUAL ID",
"ASSIGN : LINES ID EQUAL NUMBER",
"ARITHMATIC : LINES ID EQUAL ID OP ID",
"ARITHMATIC : LINES ID EQUAL ID OP NUMBER",
"ARITHMATIC : LINES ID EQUAL ID RELOP ID",
"ARITHMATIC : LINES ID EQUAL ID RELOP NUMBER",
"OP : PLUS",
"OP : MONUS",
"OP : MULT",
"OP : DIV",
"RELOP : LT",
"RELOP : GT",
"GOT_LABEL : LINES LABEL",
"CONDITION : IF ID",
"CONDITION : IGOTO ID",
"CONDITION : EGOTO ID",
"CONDITION : GOTO ID",

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
#define YYSTACKSIZE 10000
#define YYMAXDEPTH  10000
#endif
#endif

#define YYINITSTACKSIZE 200

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
#line 54 "analyze_i_code.y"


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

#line 387 "y.tab.c"

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

    i = (int) (data->s_mark - data->s_base);
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
            yys = yyname[YYTRANSLATE(yychar)];
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
            yys = yyname[YYTRANSLATE(yychar)];
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
case 6:
#line 23 "analyze_i_code.y"
	{print_assign(yystack.l_mark[-2].strval, yystack.l_mark[0].strval);}
break;
case 7:
#line 24 "analyze_i_code.y"
	{print_assign_immediate(yystack.l_mark[-2].strval, atoi(yystack.l_mark[0].numval));}
break;
case 8:
#line 27 "analyze_i_code.y"
	{print_arithmatic(yystack.l_mark[-4].strval, yystack.l_mark[-2].strval, yystack.l_mark[0].strval);}
break;
case 9:
#line 28 "analyze_i_code.y"
	{print_const_arihmetic(yystack.l_mark[-4].strval, yystack.l_mark[-2].strval, atoi(yystack.l_mark[0].numval));}
break;
case 10:
#line 29 "analyze_i_code.y"
	{print_relation(yystack.l_mark[-2].strval, yystack.l_mark[0].strval);}
break;
case 11:
#line 30 "analyze_i_code.y"
	{print_const_relation(yystack.l_mark[-2].strval, atoi(yystack.l_mark[0].numval));}
break;
case 12:
#line 33 "analyze_i_code.y"
	{operand = "+";}
break;
case 13:
#line 34 "analyze_i_code.y"
	{operand = "-";}
break;
case 14:
#line 35 "analyze_i_code.y"
	{operand = "*";}
break;
case 15:
#line 36 "analyze_i_code.y"
	{operand = "/";}
break;
case 16:
#line 39 "analyze_i_code.y"
	{operand = "<";}
break;
case 17:
#line 40 "analyze_i_code.y"
	{operand = ">";}
break;
case 18:
#line 43 "analyze_i_code.y"
	{printf("ORG %s\n", yystack.l_mark[0].labelval);}
break;
case 19:
#line 46 "analyze_i_code.y"
	{decide_jump();}
break;
case 20:
#line 47 "analyze_i_code.y"
	{printf("%s\n", yystack.l_mark[0].strval);}
break;
case 21:
#line 48 "analyze_i_code.y"
	{printf("JMP %s\n", yystack.l_mark[0].strval);}
break;
case 22:
#line 49 "analyze_i_code.y"
	{printf("JMP %s\n",yystack.l_mark[0].strval);}
break;
#line 657 "y.tab.c"
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
                yys = yyname[YYTRANSLATE(yychar)];
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
