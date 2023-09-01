#include <stdio.h>

int main()
{
    int n, i, s = 0, t = 0;
    scanf("%d", &n);
    int x[n], y[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &x[i]);
        y[i] = 0;
    }
    i = 0;
    while (i < 0 && i >= n)
    {
        if (x[i] % 2 == 0)
        {
            y[i] = 1;
            if (x[i] > 0)
            {
                x[i]--;
            }
            if (x[i] % 2 == 0)
            {
                i--;
            }
            else
            {
                i++;
            }
        }
        else
        {
            y[i] = 1;
            if (x[i] > 0)
            {
                x[i]--;
            }
            if (x[i] % 2 == 0)
            {
                i--;
            }
            else
            {
                i++;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        s += y[i];
        t += x[i];
    }
    printf("%d %d\n", s, t);
    return 0;
}
