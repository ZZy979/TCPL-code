#include <assert.h>
#include <stdio.h>
#include <string.h>

#include "getword.h"

int main() {
    /* 输入文件：testdata/getword_input.txt */
    char word[20];

    assert(getword(word, 20) == 'p' && strcmp(word, "print") == 0);
    assert(getword(word, 20) == '(' && strcmp(word, "(") == 0);
    assert(getword(word, 20) == '\'' && strcmp(word, "'") == 0);
    assert(getword(word, 3) == 'h' && strcmp(word, "hel") == 0);
    assert(getword(word, 20) == 'l' && strcmp(word, "lo") == 0);
    assert(getword(word, 20) == ',' && strcmp(word, ",") == 0);
    assert(getword(word, 20) == 'w' && strcmp(word, "world") == 0);
    assert(getword(word, 20) == '!' && strcmp(word, "!") == 0);
    assert(getword(word, 20) == '\'' && strcmp(word, "'") == 0);
    assert(getword(word, 20) == ')' && strcmp(word, ")") == 0);
    assert(getword(word, 20) == '3' && strcmp(word, "3") == 0);
    assert(getword(word, 20) == 'x' && strcmp(word, "xy") == 0);
    assert(getword(word, 20) == '+' && strcmp(word, "+") == 0);
    assert(getword(word, 20) == '4' && strcmp(word, "4") == 0);
    assert(getword(word, 20) == 'y' && strcmp(word, "yz") == 0);
    assert(getword(word, 20) == '2' && strcmp(word, "2") == 0);
    assert(getword(word, 20) == 'A' && strcmp(word, "A1B") == 0);
    assert(getword(word, 20) == EOF && strcmp(word, "") == 0);
    return 0;
}
