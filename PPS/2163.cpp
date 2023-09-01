// the.shoaib2
#include <stdio.h>

int main()
{
    int rows, cols, i, j;
    scanf("%d %d", &rows, &cols);
    int arr[rows][cols];

    // Read the arr
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    // Search for the lightsaber pattern
    for (i = 1; i < rows - 1; i++)
    {
        for (j = 1; j < cols - 1; j++)
        {
            if (arr[i][j] == 42 &&
                arr[i - 1][j - 1] == 7 && arr[i - 1][j] == 7 && arr[i - 1][j + 1] == 7 &&
                arr[i][j - 1] == 7 && arr[i][j + 1] == 7 &&
                arr[i + 1][j - 1] == 7 && arr[i + 1][j] == 7 && arr[i + 1][j + 1] == 7)
            {
                printf("%d %d\n", i + 1, j + 1);
                return 0;
            }
        }
    }
    printf("0 0\n");

    return 0;
}
