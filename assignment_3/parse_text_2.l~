%{
#include "y.tab.h"
char * id_type;
char * id_table;
%}

letter [a-zA-Z]
digit [0-9]
alfa [a-zA-Z0-9_]
whitesp [ \t\n]

%%
{whitesp}+ {};
{digit}+ {yylval.numval = strdup(yytext); return NUMBER;};

break printf("BREAK "); 
const printf("CONSTATNT ");
do printf("DO ");
else printf("ELSE ");
long printf("LONG ");
return printf("RETURN ");

int return INT;
float return FLOAT;
double return DOUBLE;
char return CHAR;

sizeof printf("SIZEOF ");
while printf("WHILE ");
for printf("FOR ");
if printf("IF ");
main printf("MAIN ");

[+] {return PLUS;}
[-] {return MONUS;}
[*] {return MULT;}
[/] {return DIV;}

[<] printf("LT ");
[>] printf("GT ");

[(] {return BRACKET_OPEN;}
[)] {return BRACKET_CLOSE;}


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


