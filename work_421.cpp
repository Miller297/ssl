#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, m;
    if (scanf("%d %d", &n, &m) != 2) return 0;
    int *indeg = (int*)calloc(n+1, sizeof(int));
    int *outdeg = (int*)calloc(n+1, sizeof(int));
    if (!indeg || !outdeg) return 0;
    for (int i = 0; i < m; ++i) {
        int a, b;
        if (scanf("%d %d", &a, &b) != 2) break;
        if (a >= 1 && a <= n) outdeg[a]++;
        if (b >= 1 && b <= n) indeg[b]++;
    }
    int found = 0;
    for (int i = 1; i <= n; ++i) {
        if (indeg[i] > 0 && outdeg[i] == 0) {
            if (found) printf(" ");
            printf("%d", i);
            found = 1;
        }
    }
    if (!found) printf("0");
    free(indeg);
    free(outdeg);
    return 0;
}