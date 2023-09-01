// the.shoaib2
#include <stdio.h>

int main()
{
    int rows, cols, i, j;

    while (scanf("%d%d", &rows, &cols) == 2)
    {
        int arr[rows][cols];

        for (i = 0; i < rows; i++)
        {
            for (j = 0; j < cols; j++)
            {
                scanf("%d", &arr[i][j]);

                if (arr[i][j] == 1)
                {
                    arr[i][j] = 9;
                }
            }
        }

        for (i = 0; i < rows; i++)
        {
            for (j = 0; j < cols; j++)
            {
                if (arr[i][j] == 0)
                {
                    int count = 0;
                    if (i > 0 && arr[i - 1][j] == 9)count++;
                    if (j > 0 && arr[i][j - 1] == 9)count++;
                    if (i < rows - 1 && arr[i + 1][j] == 9)count++;
                    if (j < cols - 1 && arr[i][j + 1] == 9)count++;
                    arr[i][j] = count;
                }
            }
        }

        for (i = 0; i < rows; i++)
        {
            for (j = 0; j < cols; j++)
            {
                printf("%d", arr[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}
