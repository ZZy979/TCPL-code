#pragma once
#define NUMBER '0'
#define IDENTIFIER 'a'

void deal_with_identifier(char s[]);

void push(double f);
double pop(void);
void show_top(void);
void duplicate_top(void);
void swap_top(void);
void clear_stack(void);

int getop(char s[]);

int getch(void);
void ungetch(int c);
