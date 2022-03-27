#include "escape.h"

/* escape：将字符串t复制到字符串s，并转义字符（例如将换行符替换为\n） */
void escape(char s[], char t[]) {
    int i = 0, j;

    for (j = 0; t[j] != '\0'; ++j) {
        switch (t[j]) {
            case '\a':
                s[i++] = '\\';
                s[i++] = 'a';
                break;
            case '\b':
                s[i++] = '\\';
                s[i++] = 'b';
                break;
            case '\f':
                s[i++] = '\\';
                s[i++] = 'f';
                break;
            case '\n':
                s[i++] = '\\';
                s[i++] = 'n';
                break;
            case '\r':
                s[i++] = '\\';
                s[i++] = 'r';
                break;
            case '\t':
                s[i++] = '\\';
                s[i++] = 't';
                break;
            case '\v':
                s[i++] = '\\';
                s[i++] = 'v';
                break;
            case '\\':
                s[i++] = '\\';
                s[i++] = '\\';
                break;
            case '\'':
                s[i++] = '\\';
                s[i++] = '\'';
                break;
            case '\"':
                s[i++] = '\\';
                s[i++] = '\"';
                break;
            default:
                s[i++] = t[j];
                break;
        }
    }
    s[i] = '\0';
}

/* unescape：将字符串t复制到字符串s，并反转义字符（例如将\n替换为换行符） */
void unescape(char s[], char t[]) {
    int i = 0, j = 0;

    while (t[j] != '\0') {
        if (t[j] == '\\') {
            switch (t[j + 1]) {
                case 'a':
                    s[i++] = '\a';
                    break;
                case 'b':
                    s[i++] = '\b';
                    break;
                case 'f':
                    s[i++] = '\f';
                    break;
                case 'n':
                    s[i++] = '\n';
                    break;
                case 'r':
                    s[i++] = '\r';
                    break;
                case 't':
                    s[i++] = '\t';
                    break;
                case 'v':
                    s[i++] = '\v';
                    break;
                case '\\':
                    s[i++] = '\\';
                    break;
                case '\'':
                    s[i++] = '\'';
                    break;
                case '\"':
                    s[i++] = '\"';
                    break;
                default:
                    s[i++] = t[j + 1];
                    break;
            }
            j += 2;
        }
        else
            s[i++] = t[j++];
    }
    s[i] = '\0';
}
