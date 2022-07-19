#include "minscanf.h"

#include <stdio.h>
#include <stdarg.h>
#include <ctype.h>

/* minscanf：带有可变参数表的简化的scanf */
int minscanf(char *fmt, ...) {
    va_list ap;
    int matched = 0;
    char format[] = "%d";
    char *p, c;
    void *pval;

    va_start(ap, fmt);
    for (p = fmt; *p; p++) {
        if (isspace(*p)) {
            while (isspace(c = getchar()))
                ;
            ungetc(c, stdin);
            continue;
        }
        else if (*p != '%') {
            if (getchar() != *p)
                goto end;
            continue;
        }
        switch (*++p) {
            case '%':
                if (getchar() != '%')
                    goto end;
                break;
            default:
                pval = va_arg(ap, void *);
                format[1] = *p;
                if (!scanf(format, pval))
                    goto end;
                ++matched;
                break;
        }
    }
end:
    va_end(ap);
    return matched;
}
