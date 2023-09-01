// the.shoaib2
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[2001] = {0};
    int x;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x);
        arr[x]++;
    }

    for (int i = 0; i <= 2000; i++)
    {
        if (arr[i] > 0)
        {
            printf("%d aparece %d vez(es)\n", i, arr[i]);
        }
    }

    return 0;
}