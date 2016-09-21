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
#ifdef YYSTYPE
#undef  YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#endif
#ifndef YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
typedef union {char *strval;char *numval;} YYSTYPE;
#endif /* !YYSTYPE_IS_DECLARED */
extern YYSTYPE yylval;
