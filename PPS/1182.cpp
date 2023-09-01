// the.shoaib2
#include <stdio.h>
int main()
{
    double M[12][12], Sum = 0.0;
    int i, j, n;
    char Char[2];

    scanf("%d %s", &n, &Char);

    for (i = 0; i < 12; i++)
    {
        for (j = 0; j < 12; j++)
        {
            scanf("%lf", &M[i][j]);
        }
    }
    

    for (i = 0; i < 12; i++)
    {
        Sum += M[i][n];
    }


    if (Char[0] == 'S')
    {
        printf("%.1lf\n", Sum);
    }
    else if (Char[0] == 'M')
    {
        printf("%.1lf\n", Sum / 12.0);
    }

    return 0;
}