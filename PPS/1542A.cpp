// the.shoaib2
#include <stdio.h>
#include <math.h>
int main()
{
    int n, t;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int count_even = 0, count_odd = 0;
        scanf("%d", &t);
        for (int i = 0; i < t * 2; i++)
        {
            int num;

            scanf("%d", &num);
            (num % 2 == 0) ? count_even++ : count_odd++;
        }
        (count_even == count_odd) ? printf("YES\n") : printf("NO\n");
    }

    return 0;
}