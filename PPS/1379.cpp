// the.shoaib2
#include <stdio.h>
#include <math.h>
int main()
{
    long long int a, b;
    while (1)
    {
        scanf("%lld %lld", &a, &b);
        if ((a + b) == 0)
        {
            break;
        }

        printf("%lld\n", a - (b - a));
    }
    return 0;
}
