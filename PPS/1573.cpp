// the.shoaib2
#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c, M, X;

    do
    {
        scanf("%d %d %d", &a, &b, &c);
        if (a == 0 && b == 0 && c == 0)
            break;
        M = (a * b * c);
        X = cbrt(M); // pow(M,1.0/3.0);
        printf("%d\n", X);
    } while (1); // while(a != 0 && b != 0 && c != 0)
    return 0;
}
