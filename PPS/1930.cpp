// the.shoaib2
#include <stdio.h>
int main()
{
    int T1, T2, T3, T4, Sum;
    while (scanf("%d %d %d %d", &T1, &T2, &T3, &T4) == 4)
    {
        Sum = T1 + T2 + T3 + T4;
        printf("%d\n",Sum-3);
    }
    return 0;
}