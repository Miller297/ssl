#include <stdio.h>
#include <string.h>

int main(void) {
    char buf[512];
    char best[512] = "";
    int maxlen = 0;
    while (fgets(buf, sizeof buf, stdin)) {
        size_t l = strlen(buf);
        while (l > 0 && (buf[l-1] == '\n' || buf[l-1] == '\r')) { buf[--l] = '\0'; }
        if (strcmp(buf, "***end***") == 0) break;
        if ((int)l > maxlen) {
            maxlen = (int)l;
            strcpy(best, buf);
        }
    }
    printf("%d\n%s\n", maxlen, best);
    return 0;
}