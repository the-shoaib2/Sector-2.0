// the.shoaib2
#include <stdio.h>
#include <math.h>
int main()
{
    int t;
    long long n, rows;
    double delta, y;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%lld", &n);
        delta = 1 + 8 * n;
        y = (-1 + sqrt(delta)) / 2;
        // round down y to the nearest integer
        rows = (long long)floor(y);
        printf("%lld\n", rows);
    }
    return 0;
}
