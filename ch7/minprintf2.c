#include "minprintf.h"

#include <stdio.h>
#include <stdarg.h>

/* minprintf：带有可变参数表的简化的printf */
void minprintf(char *fmt, ...) {
    va_list ap;     /* 依次指向每个无名参数 */
    char format[] = "%d";
    char *p, *sval;
    int ival;
    unsigned uval;
    double dval;
    void *pval;

    va_start(ap, fmt);  /* 将ap指向第一个无名参数 */
    for (p = fmt; *p; p++) {
        if (*p != '%') {
            putchar(*p);
            continue;
        }
        switch (*++p) {
            case 'd': case 'i': case 'c':
                ival = va_arg(ap, int);
                format[1] = *p;
                printf(format, ival);
                break;
            case 'u': case 'o': case 'x': case 'X':
                uval = va_arg(ap, unsigned);
                format[1] = *p;
                printf(format, uval);
                break;
            case 'f': case 'e': case 'E': case 'g': case 'G':
                dval = va_arg(ap, double);
                format[1] = *p;
                printf(format, dval);
                break;
            case 's':
                sval = va_arg(ap, char *);
                printf("%s", sval);
                break;
            case 'p':
                pval = va_arg(ap, void *);
                printf("%p", pval);
                break;
            case '%':
                putchar('%');
                break;
            default:
                putchar(*p);
                break;
        }
    }
    va_end(ap);     /* 结束时的清理工作 */
}
