// the.shoaib2
#include <stdio.h>
int main()
{
    long int n;
    int t;
    scanf("%ld%ld", &n, &t);
    for (int i = 0; i < t; i++)
    {
        if (n % 10 == 0)
            n = n / 10;
        else
            n -= 1;
    }
    printf("%ld", n);
    return 0;
}