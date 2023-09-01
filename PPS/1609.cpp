#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        scanf("%d", &n);
        int a[n];
        int count = 0;

        for (int i = 0; i < n; i++)
        {
            int y;
            scanf("%d", &y);

            // Insert y into a if it's not already in there
            int j;
            for (j = 0; j < count; j++)
            {
                if (a[j] == y)
                {
                    break;
                }
            }
            if (j == count)
            {
                a[count++] = y;
            }
        }

        printf("%d\n", count);
    }

    return 0;
}
