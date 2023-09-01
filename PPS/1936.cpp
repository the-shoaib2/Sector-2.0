// the.shoaib2
#include <stdio.h>
int main()
{
    int num, i, factor = 1, count = 0;
    scanf("%d", &num);
    for (i = 1; num > 0; i++)
    {
        factor *= i;
        if (factor > num)
        {
            factor /= i;
            num -= factor;
            factor = 1;
            i = 0;
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}
