// the.shoaib2
#include <stdio.h>
int main()
{
    int x, y;
    while (1)
    {
        scanf("%d %d", &x, &y);
        if (x == y)
        {
            break;
        }
        else if (x > y)
        {
            printf("Decrescente");
        }
        else
        {
            printf("Crescente");
        }
        printf("\n");
    }


return 0;
}