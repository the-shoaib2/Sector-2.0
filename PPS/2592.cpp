// the.shoaib2
#include <stdio.h>
int main()
{
    int n;
    while (scanf("%d", &n) == 1 && n)
    {
        int c = 0;
        while (1)
        {
            int f = 0, x;
            for (int i = 1; i <= n; i++)
            {
                scanf("%d", &x);
                if (x != i)
                    f = 1;
            }
            c++;
            if (!f)
                break;
        }
        printf("%d\n", c);
    }
    return 0;
}
