// the.shoaib2
#include <stdio.h>
#include <math.h>
int main()
{
    int n, a, b;
    int arr[501][501] = {0};
    scanf("%d", &n);
    while (n--)
    {
        scanf("%d %d", &a, &b);
        if (arr[a][b] == 1)
        {
            printf("1\n");
            return 0;
        }
        arr[a][b] = 1;
    }
    printf("0\n");
    return 0;
}
