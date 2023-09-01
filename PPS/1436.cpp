// the.shoaib2
#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 1; i <= t; i++)
    {
        int n;
        scanf("%d", &n);
        int arr[n];

        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[j]);
        }

        int ans = arr[n / 2];
        printf("Case %d: %d\n", i, ans);
    }

    return 0;
}