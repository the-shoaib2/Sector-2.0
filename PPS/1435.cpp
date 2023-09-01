// the.shoaib2
#include <stdio.h>

int main()
{
    int i, j, k, n, count, a, b;
    while (scanf("%d", &n) == 1 && n > 0)
    {
        if (n == 0)
            break;
        int arr[n][n];
        // Calculate the number of levels required to fill the array
        count = n / 2;
        if (n % 2 == 1)
            count++;
        // Set the initial and final indices for each level
        a = 0;
        b = n - 1;
        // Fill the array level by level with the corresponding number
        for (k = 1; k <= count; k++)
        {
            for (i = a; i <= b; i++)
            {
                for (j = a; j <= b; j++)
                {
                    arr[i][j] = k;
                }
            }
            a++;
            b--;
        }
        // Print the resulting array
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                (j == 0) ? printf("%3d", arr[i][j]) : printf(" %3d", arr[i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
