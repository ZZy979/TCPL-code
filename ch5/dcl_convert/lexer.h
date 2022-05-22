#pragma once
#define MAXTOKEN 100

enum { NAME, PARENS, BRACKETS };

extern int tokentype;
extern char token[];

int gettoken(void);
