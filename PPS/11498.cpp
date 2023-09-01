#include <stdio.h>
int main()
{
    int a, b, c, d, n;
    while (1)
    {
        int i = 0;
        scanf("%d", &n);
        if (n == 0)
        {
            break;
        }
        scanf("%d %d", &a, &b);
        while (i < n)
        {
            scanf("%d %d", &c, &d);
            if (c > a && d > b)
                printf("NE\n");
            else if (c > a && d < b)
                printf("SE\n");

            // "SO\n" );
            else if (c < a && d > b)
                printf("NO\n");
            else
                printf("divisa\n");

            i++;
        }
    }
    return 0;
}
