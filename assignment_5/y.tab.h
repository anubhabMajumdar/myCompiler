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
#ifdef YYSTYPE
#undef  YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#endif
#ifndef YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
typedef union {char *strval;char *numval;char *labelval;} YYSTYPE;
#endif /* !YYSTYPE_IS_DECLARED */
extern YYSTYPE yylval;
