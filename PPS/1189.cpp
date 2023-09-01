// the.shoaib2
#include <stdio.h>

int main()
{
    double M[12][12], Sum = 0;
    char Char[2];
    int i, j;
    int C1 = 1, C2 = 10;
 
    scanf("%s", &Char);

    for (i = 0; i < 12; i++)
        for (j = 0; j < 12; j++)
            scanf("%lf", &M[i][j]);

    for (i = 0; i < 5; i++)
    {
        for (j = C1; j <= C2; j++)
        
            Sum += M[j][i];
        
        C1++;
        C2--;
    }


    (Char[0] == 'S')
        ? printf("%.1lf\n", Sum)
        : printf("%.1lf\n", Sum / 30.0);

    return 0;
}
