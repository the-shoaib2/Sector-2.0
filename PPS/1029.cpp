//the.shoaib2
#include <stdio.h>

int fib(int n, int* calls) {
    (*calls)++;
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fib(n-1, calls) + fib(n-2, calls);
    }
}

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int x;
        scanf("%d", &x);
        int calls = -1; // start at -1 to account for initial call
        int result = fib(x, &calls);
        printf("fib(%d) = %d calls = %d\n", x, calls, result);
    }
    return 0;
}
