// the.shoaib2
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX_N 205

int main()
{
    int n;
    int arr[MAX_N][MAX_N];
    int x, y;
    int i, j;
    bool s[MAX_N * MAX_N] = {false};
    char c;

    while (scanf("%d", &n) == 1)
    {
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                scanf("%d", &arr[i][j]);
            }
        }

        n *= 2;

        while (n--)
        {
            scanf("%d%c%d", &x, &c, &y);
            x--, y--;
            s[arr[x][y]] = true;
        }

        int unique = 0;
        for (i = 0; i < MAX_N * MAX_N; i++)
        {
            if (s[i])
            {
                unique++;
            }
        }
        printf("%d\n", unique);
    }
    return 0;
}
