#include <stdio.h>
#include <string.h>

void wd_sort(char str[][20], int n) {
    char tmp[20];
    for (int i = 0; i < n - 1; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (strcmp(str[i], str[j]) > 0) {
                strcpy(tmp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], tmp);
            }
        }
    }
}

int main(void) {
    int N;
    if (scanf("%d", &N) != 1) return 0;
    if (N < 1) return 0;
    if (N > 10) N = 10;
    char str[10][20];
    for (int i = 0; i < N; ++i) {
        if (scanf("%19s", str[i]) != 1) str[i][0] = '\0';
    }
    wd_sort(str, N);
    for (int i = 0; i < N; ++i) {
        printf("%s\n", str[i]);
    }
    return 0;
}