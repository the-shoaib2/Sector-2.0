// the.shoaib2
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[100];
    int N, Q, q;

    while (scanf("%d %d", &N, &Q) != EOF)
    {

        for (int i = 0; i < N; i++)
        {
            scanf("%d", &arr[i]);
        }

        for (int i = 0; i < N - 1; i++)
        {
            for (int j = i + 1; j < N; j++)
            {
                if (arr[i] < arr[j])
                {
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }

        for (int i = 0; i < Q; i++)
        {
            scanf("%d", &q);
            printf("%d\n", arr[q - 1]);
        }
    }
    return 0;
}
