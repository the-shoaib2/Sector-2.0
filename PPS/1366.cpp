// the.shoaib2
#include <stdio.h>

int main()
{
    int i, n, Ci, Vi, X;
    while (1)
    {
        scanf("%d", &n);
        X = 0;
        if (n == 0)
            break;
        else
        {

            for (i = 1; i <= n; i++)
            {
                scanf("%d %d", &Ci, &Vi);

                if (Vi % 2 == 0)
                    X += Vi;
                else
                    X += Vi - 1;
            }
            printf("%d\n", X / 4);
        }
    }

    return 0;
}
