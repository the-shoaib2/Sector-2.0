// the.shoaib2
#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    while (scanf("%d", &n) == 1 && EOF)
    {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);

        double l = n * sqrt(pow(a, 2) + pow(b, 2));

        printf("%.4lf\n", (c * l) / (100.0 * 100.0));
    }
    return 0;
}
