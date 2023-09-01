//the.shoaib2
#include <stdio.h>

int main() {
    int n;
    while (scanf("%d", &n) == 1 && n >= 0 && n <= 1000000001) {
        // Convert decimal integer n to ternary
        int ternary[100];
        int i = 0;
        while (n > 0) {
            ternary[i] = n % 3;
            n /= 3;
            i++;
        }

        // Print ternary digits in reverse order
        for (int j = i - 1; j >= 0; j--) {
            printf("%d", ternary[j]);
        }
        printf("\n");
    }
    return 0;
}

