// the.shoaib2
#include <stdio.h>
int main()
{
    int A1, B1, C1;
    int A2, B2, C2;
    scanf("%d%d%d", &A1, &B1, &C1);
    scanf("%d%d%d", &A2, &B2, &C2);
    int miss = 0;
    if (A2 > A1)
    {
        miss += (A2 - A1);
    }
    if (B2 > B1)
    {
        miss += (B2 - B1);
    }
    if (C2 > C1)
    {
        miss += (C2 - C1);
    }
    printf("%d\n", miss);
    return 0;
}
