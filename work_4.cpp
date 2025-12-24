#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) {
    return strcmp(*(char * const *)a, *(char * const *)b);
}

int main() {
    char line[300];
    if (!fgets(line, sizeof line, stdin)) return 0;
    line[strcspn(line, "\r\n")] = 0;
    char *tok = strtok(line, " "); // 程序名
    if (!tok) { printf("no\n"); return 0; }
    tok = strtok(NULL, " ");
    char *opts[256];
    int cnt = 0;
    while (tok) {
        if (tok[0] == '-') {
            int found = 0;
            for (int i = 0; i < cnt; ++i) if (strcmp(opts[i], tok) == 0) { found = 1; break; }
            if (!found) {
                opts[cnt] = (char*)malloc(strlen(tok) + 1); // ← 显式转换
                strcpy(opts[cnt], tok);
                cnt++;
            }
        }
        tok = strtok(NULL, " ");
    }
    if (cnt == 0) {
        printf("no\n");
    } else {
        qsort(opts, cnt, sizeof(opts[0]), cmp);
        for (int i = 0; i < cnt; ++i) {
            if (i) putchar(' ');
            fputs(opts[i], stdout);
            free(opts[i]);
        }
        putchar('\n');
    }
    return 0;
}