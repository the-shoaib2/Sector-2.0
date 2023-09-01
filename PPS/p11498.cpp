// the.shoaib2
#include <stdio.h>
int main()
{
    int n, x, y, a, b;
    while (scanf("%d", &n) == 1 && n)
    {
        scanf("%d %d", &x, &y);
        while (n--)
        {
            scanf("%d %d", &a, &b);
            (a == x || b == y) ? printf("divisa") : (a > x && b > y) ?printf("NE"): (a < x && b > y)?printf("NO"):(a < x && b < y)?printf("SO") : printf("SE");

            // if (a == x || b == y)
            //     printf("divisa");
            // else if (a > x && b > y)
            //     printf("NE");
            // else if (a < x && b > y)
            //     printf("NO");
            // else if (a < x && b < y)
            //     printf("SO");
            // else
            //     printf("SE");
        }
    }
    return 0;
}