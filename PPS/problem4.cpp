//the.shoaib2
#include <stdio.h>

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int n;
    scanf("%d", &n);

    int result = factorial(n);
    printf("%d\n", result);

    return 0;
}




// #include <stdio.h>

// int main() {
//     int n;
//     scanf("%d", &n);

//     int factorial = 1;
//     for (int i = 1; i <= n; i++) {
//         factorial *= i;
//     }

//     printf("%d\n", factorial);

//     return 0;
// }
