// the.shoaib2
#include <stdio.h>
#include <stdlib.h>
#define min(a, b) ((a) < (b) ? (a) : (b))
#define max(a, b) ((a) > (b) ? (a) : (b))
int main()
{
    int a, b, c, d;

    while (scanf("%d %d %d %d", &a, &b, &c, &d) == 4)
    {
        int e = min(a, b) + min(c, d);
        int g = max(min(a, b), min(c, d));
        int h = min(e, g);

        printf("%d\n", h * h);
    }

    return 0;
}
