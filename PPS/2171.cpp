// the.shoaib2
#include <stdio.h>
int main()
{
    int x, i, j;
    while (scanf("%d", &x) == 1 && x)
    {
        i = 0;
        for (j = 1; i + j <= x; j++)
        {
            i += j;
        }
        printf("%d %d\n", i, x - i);
    }
    return 0;
}
