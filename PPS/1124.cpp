// the.shoaib2
#include <stdio.h>
#include <math.h>

int main()
{
    int L, C, R1, R2, D, E, F;

    while (1)
    {
        scanf("%d %d %d %d", &L, &C, &R1, &R2);
        if (L == 0 && C == 0 && R1 == 0 && R2 == 0)
        {
            break;
        }

        D = sqrt(L * L + C * C);
        E = (int)(3.1416 * R1 * R1 / 2);
        F = (int)(3.1416 * R2 * R2 / 2);

        if (D >= R1 + R2 && D >= E && D >= F)
        {
            printf("S\n");
        }
        else
        {
            printf("N\n");
        }
    }

    return 0;
}
