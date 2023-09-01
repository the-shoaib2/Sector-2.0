// the.shoaib2
#include <stdio.h>

int main()
{
    int N, X, i;
    long long int Fib[60];
    Fib[0] = 0;
    Fib[1] = 1;
    for (i = 2; i <= 60; i++)
    {
        Fib[i] = Fib[i - 1] + Fib[i - 2];
    }
    scanf("%d", &N);
    for (i = 0; i < N; i++)
    {
        scanf("%d", &X);
        printf("Fib(%d) = %lld\n", X, Fib[X]);
    }
    return 0;
}
