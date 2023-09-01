// the.shoaib2
#include <stdio.h>
int main()
{
    double N[12][12], Sum = 0;
    char Char[2];
    int i, j;
    int C1 = 1, C2 = 10;
    int R1 = 6, R2 = 11;

    scanf("%s", &Char);

    for (i = 0; i < 12; i++)
    {
        for (j = 0; j < 12; j++)
        {
            scanf("%lf", &N[i][j]);
        }
    }

    for (i = R2; i > R1; i--)
    {
        for (j = C1; j <= C2; j++)
        {
            Sum += N[j][i];
        }

        C1++;
        C2--;
    }
    if (Char[0] == 'S')
    {
        printf("%.1lf\n", Sum);
    }
    else
    {
        printf("%.1lf\n", Sum / 30.0);
    }
    return 0;
}