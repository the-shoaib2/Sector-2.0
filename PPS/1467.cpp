// the.shoaib2
#include <stdio.h>
int main()
{
    int a, b, c;
    while (scanf("%d %d %d", &a, &b, &c) == 3)
    {
        if (a == b && b == c)
        {
            printf("*\n");
        }
        else
        {
            if (a == b)
            {
                printf("C\n");
            }
            else if (a == c)
            {
                printf("B\n");
            }
            else if (b == c)
            {
                printf("A\n");
            }
        }
    }
        return 0;
    }