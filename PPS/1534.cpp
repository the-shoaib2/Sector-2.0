// the.shoaib2
#include <stdio.h>

int main()
{
    int i, j, k, n;
    int arr[72][72];
    while (scanf("%d", &n) != EOF)
    {
        k = n - 1; // set the diagonal index to the last column
        for (i = 0; i < n; i++) // iterate over the rows
        {
            for (j = 0; j < n; j++) // iterate over the columns
            {
                (i == j) ? arr[i][j] = 1 : arr[i][j] = 3;
                // if the current element is on the anti-diagonal, set it to 2
                if (j == k)
                    arr[i][j] = 2;
            }
            k--; // decrement the diagonal index for the next row
        }

        for (i = 0; i < n; i++) // iterate over the rows
        {
            for (j = 0; j < n; j++) // iterate over the columns
            {
                printf("%d", arr[i][j]); // print the current element
            }
            printf("\n");
        }
    }
    return 0;
}
