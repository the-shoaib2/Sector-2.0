// the.shoaib2
#include <stdio.h>
#include <math.h>

int main()
{
    int n, i, j;
    while (scanf("%d", &n) == 1 && n != 0)
    {
        int arr[n][n];
        for (i = 0; i < n; i++) // iterate over the rows
        {
            for (j = 0; j < n; j++) // iterate over the columns
            {
                arr[i][j] = abs(j - i) + 1; // set value in array
            }
        }
        for (i = 0; i < n; i++) // iterate over the rows
        {
            for (j = 0; j < n; j++) // iterate over the columns
            {
                (j == 0) ? printf("%3d", arr[i][j])
                         : printf(" %3d", arr[i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}
