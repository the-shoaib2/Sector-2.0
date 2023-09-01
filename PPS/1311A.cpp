// the.shoaib2
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    long long int a, b, ans, dis;
    scanf("%d", &t);

    while (t--)
    {
        ans = dis = 0;
        scanf("%lld %lld", &a, &b);

        if (a == b)
        {
            printf("0\n");
            continue;
        }

        if (a > b)
        {
            dis = a - b;
            ans++;
            if (dis % 2 != 0)
                ans++;
        }
        else if (a < b)
        {
            dis = b - a;
            ans++;
            if (dis % 2 != 1)
                ans++;
        }

        printf("%lld\n", ans);
    }

    return 0;
}
