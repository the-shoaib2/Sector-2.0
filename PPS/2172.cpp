// the.shoaib2
#include <stdio.h>
int main()
{
    long long int X, M;
    while (1)
    {
        scanf("%lld %lld", &X, &M);
        if (X == 0 && M == 0)
        {
            break;
        }
        else
        {
            printf("%lld\n", X * M);
        }
    }

    return 0;
}