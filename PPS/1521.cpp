// the.shoaib2
#include <stdio.h>
int main()
{
    int t, n, k;

    do
    {
        scanf("%d", &n);

        if (n == 0)
            break;

        int arr[n + 1];

        for (int i = 1; i <= n; ++i)
        {
            scanf("%d", &arr[i]);
        }

        scanf("%d", &k);

        while (arr[k] != k)
        {
            k = arr[k];
        }

        printf("%d\n", k);
    } while (1);

    return 0;
}

// scanf("%d", &t);

// while (t--)
// {
//     scanf("%d", &n);

//     int arr[n + 1];

//     for (int i = 1; i <= n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }

//     scanf("%d", &k);

//     while (arr[k] != k)
//     {
//         k = arr[k];
//     }

//     printf("%d\n", k);
// }
