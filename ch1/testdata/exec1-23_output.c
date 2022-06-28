#include <stdio.h>


int main() {
    int c = getchar();

    
    if (c == ' ' || c == '\n' || c == '\t' || c == '\'' || c == '\"' || c == '\\')
        putchar(c);

    printf("\n\t\'\"\\");   
    printf("/* comment in string */\n");    

    

    
    return 0;
}
