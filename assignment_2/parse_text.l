%{
%}

%%
 /*comment
 
 hello*/

[a-zA-Z] {my_function(yytext);}
%%
main()
{
	yylex();
	
}

yywrap()
{
	
}

my_function(char *a)
{
	int val;
	
	val = int(a[0])
	printf("%d",val);	
}
