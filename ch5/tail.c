#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "../ch4/getline.h"

#define MAXLEN 1000     /* 每个输入行的最大长度 */
#define MAXLINES 1000   /* 打印的最大行数 */

struct queue {
    char *lineptr[MAXLINES];
    int head;   /* 队列头指针 */
    int tail;   /* 队列尾指针 */
    int size;   /* 元素个数 */
};

int readlines(struct queue *q, int nlines);
void writelines(struct queue *q);

/* tail：打印输入中的最后n行 */
int main(int argc, char *argv[]) {
    int nlines = 10;
    struct queue line_queue = {{NULL}, 0, 0};   /* 输入行队列 */

    if (argc > 1 && argv[1][0] == '-') {
        nlines = atoi(argv[1] + 1);
        if (nlines == 0)
            return 0;
        else if (nlines < 0 || nlines > MAXLINES) {
            printf("tail: n must be between 0 and %d\n", MAXLINES);
            return 1;
        }
    }
    if (readlines(&line_queue, nlines) < 0) {
        printf("tail: input too big\n");
        return 1;
    }
    writelines(&line_queue);
    return 0;
}

/* readlines：读取输入行到队列，只保留最后至多nlines行 */
int readlines(struct queue *q, int nlines) {
    int len;
    char line[MAXLEN], *p;

    while ((len = getline(line, MAXLEN)) > 0) {
        if ((p = malloc(len)) == NULL)
            return -1;
        line[len - 1] = '\0';   /* 删除换行符 */
        strcpy(p, line);
        if (q->size == nlines) {
            free(q->lineptr[q->head]);
            q->head = (q->head + 1) % MAXLINES;
            q->size--;
        }
        q->lineptr[q->tail] = p;
        q->tail = (q->tail + 1) % MAXLINES;
        q->size++;
    }
    return 0;
}

/* writelines：打印队列中的文本行 */
void writelines(struct queue *q) {
    while (q->size) {
        printf("%s\n", q->lineptr[q->head]);
        free(q->lineptr[q->head]);
        q->head = (q->head + 1) % MAXLINES;
        q->size--;
    }
}
