%{
#include "y.tab.h"
%}

letter [a-zA-Z]
digit [0-9]
alfa [a-zA-Z0-9_]
whitesp [ \t\n]

%%



{whitesp}+ {};


IF 	{return IF;}

goto 	{return GOTO;}
ifgoto	{return IGOTO;}
elsegoto {return EGOTO;}
	
[=]	{return EQUAL;}

[+] {return PLUS;}
[-] {return MONUS;}
[*] {return MULT;}
[/] {return DIV;}

[<] return LT;
[>] return GT;

[L|W]([0-9])+[:]	{yylval.labelval = strdup(yytext) ; return LABEL;}

{digit}+ {yylval.numval = strdup(yytext); return NUMBER;};

[a-zA-Z]([a-zA-Z]|[0-9])* {yylval.strval = strdup(yytext) ; return ID;}



%%


yywrap()
{

}

