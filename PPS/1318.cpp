//the.shoaib2
#include <stdio.h>
int main()
{
    int n, m, t, count;
    int arr[10001] = {0};
    while (scanf("%d %d", &n, &m) && n != 0 && m != 0)
    {
        // while (1)  
        // scanf("%d%d", &n, &m);
        // if (n == 0 && m == 0)
        // {
        //     break;
        // }
        count = 0;
        for (int i = 0; i < m; i++)
        {
            scanf("%d", &t);
            if (arr[t]++ == 1)
            {
                count++;
            }
        }
        printf("%d\n", count);
        for (int i = 0; i < n; i++)
        {
            arr[i] == 0;
        }
    }

    return 0;
}
