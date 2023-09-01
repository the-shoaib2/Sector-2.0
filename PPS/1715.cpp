#include <stdio.h>

int main() {
    int arr[101][101], i, j, n, m, count = 0;
    scanf("%d %d", &n, &m);

    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    for (i = 0; i < n; i++) {
        int def = 1; 
        for (j = 0; j < m; j++) {
            if (arr[i][j] <= 0) {
                def = 0; 
                break; 
            }
        }

        if (def) {
            count++; 
        }
    }

    printf("%d\n", count);
    return 0;
}
