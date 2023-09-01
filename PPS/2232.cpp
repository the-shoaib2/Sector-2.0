// the.shoaib2
#include <stdio.h>
#include <math.h>
int main()
{
    int t, n;
    long long int R;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);
        R = pow(2, n);
        printf("%lld\n", R-1);
    }

    return 0;
}
