// the.shoaib2
#include <stdio.h>
#include <math.h>

int main() {
    int n;
    while (scanf("%d", &n) == 1 && n != 0) {
        int a[n][n];
        int max_value = pow(2, 2*n-2);
        int max_width = ceil(log10(max_value));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                a[i][j] = pow(2, i+j);
                printf("%*d", max_width, a[i][j]);
                if (j < n - 1) {
                    printf(" ");
                }
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
