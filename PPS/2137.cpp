// the.shoaib2
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(const void *a, const void *b)
{
    return strcmp((const char *)a, (const char *)b);
}

int main()
{
    int n;
    while (scanf("%d", &n) == 1)
    {
        char a[n][5];
        int A[n];

        for (int i = 0; i < n; i++)
        {
            scanf("%s", a[i]);
            A[i] = atoi(a[i]);
        }

        qsort(a, n, sizeof(a[0]), compare);

        for (int i = 0; i < n; i++)
        {
            printf("%s\n", a[i]);
        }
    }

    return 0;
}
