%{
#include "y.tab.h"
%}

letter [a-zA-Z]
digit [0-9]
alfa [a-zA-Z0-9_]
whitesp [ \t\n]

%%

{digit}+ {yylval.numval = strdup(yytext); return NUMBER;};
{whitesp}+ {};

break return BREAK; 
continue return CONTINUE;
const printf("CONSTATNT ");
do printf("DO ");
else return ELSE;
long printf("LONG ");
return printf("RETURN ");

int return INT;
float return FLOAT;
double return DOUBLE;
char return CHAR;

sizeof printf("SIZEOF ");
while return WHILE;
for printf("FOR ");
if {return IF;}
main printf("MAIN ");

[+] {return PLUS;}
[-] {return MONUS;}
[*] {return MULT;}
[/] {return DIV;}

[<] return LT;
[>] return GT;

[(] {return BRACKET_OPEN;}
[)] {return BRACKET_CLOSE;}
[{] {return CURLY_OPEN;}
[}] {return CURLY_CLOSE;}	

[=] {return EQUAL;}

[==]+ printf("EQUAL_EQUAL ");
[&&]+ printf("AND ");
[||]+ printf("OR ");

[a-zA-Z]([a-zA-Z]|[0-9])* {yylval.strval = strdup(yytext) ; return ID;}

[,] return COMMA;
[;] return SEMICOLON;

%%


yywrap()
{

}


