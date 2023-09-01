// the.shoaib2
#include <stdio.h>

int main()
{
    int a, b = 0, c = 0;

    while (scanf("%d %d", &a, &b) != EOF)
    {

        while (b != 0)
        {
            c += b % 10;
            b /= 10;
        }

        (c % 3 == 0) ? printf("%d sim\n", c) : printf("%d nao\n", c);
        
    }

    return 0;
}
