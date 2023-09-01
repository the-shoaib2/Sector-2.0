#include <stdio.h>

int main()
{
    int n, m, p, sum;
    char c;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &m);
        sum = 1000;
        for (int j = 0; j < m; j++)
        {
            setbuf(stdin, NULL);//1
            scanf("%s %d", &c, &p);
            if (c == '+')
            {
                sum += p;
            }
            else if (c == '-')
            {
                sum -= p;
            }
        }
        printf("Case %d: %d\n", i + 1, sum);
    }
    return 0;
}