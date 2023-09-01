// the.shoaib2
#include <stdio.h>

int main()
{
    int N, D, i, j;
    int sum = 0;

    while (1)
    {
        scanf("%d%d", &N, &D);

        if (N == 0 && D == 0)
            break;

        int Matrix[D][N];

        for (i = 0; i < D; i++)
            for (j = 0; j < N; j++)
                scanf("%d", &Matrix[i][j]);

        int flag = 0;

        for (j = 0; j < N; j++)
        {
            for (i = 0; i < D; i++)
                sum += Matrix[i][j];

            if (sum == D)
            {
                flag = 1;
                break;
            }
        }

        (flag == 1) ? printf("yes\n") : printf("no\n");
    }

    return 0;
}
