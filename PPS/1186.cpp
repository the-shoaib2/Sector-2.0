// the.shoaib2
#include <stdio.h>

int main()
{
    double M[12][12], Sum = 0;
    char Char[2];
    int i, j;
    int n = 11;

    scanf("%s", &Char);

    for (i = 0; i < 12; i++)
        for (j = 0; j < 12; j++)
            scanf("%lf", &M[i][j]);

    for (i = 1; i < 12; i++)
    {
        for (j = n; j < 12; j++)
        
            Sum += M[i][j];
        
        n--;
    }

    (Char[0] == 'S')
        ? printf("%.1lf\n", Sum)
        : printf("%.1lf\n", Sum / 66.0);

    return 0;
}
