// the.shoaib2
#include <stdio.h>

int main()
{
    int N;

    while (1)
    {
        scanf("%d", &N);
        if (N == 0)
        {
            break;
        }

        for (int i = 1; i <= N; i++)
        {
            printf("%d", i);
            if (i != N)
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
