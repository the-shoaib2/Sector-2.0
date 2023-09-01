// the.shoaib2
#include <stdio.h>
#include <math.h>

int main()
{
    int R1, R2, X1, X2, Y1, Y2;
    while (scanf("%d %d %d %d %d %d", &R1, &X1, &Y1, &R2, &X2, &Y2) == 6)
    {
        double distance = sqrt(pow(X2 - X1, 2) + pow(Y2 - Y1, 2));
        if (distance <= R1 - R2)
        {
            printf("RICO\n");
        }
        else
        {
            printf("MORTO\n");
        }
    }
    return 0;
}
