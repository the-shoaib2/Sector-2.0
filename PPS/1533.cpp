// the.shoaib2
#include <stdio.h>

int main()
{
    int n;

    while (scanf("%d", &n) && n)
    {
        int max1 = 0, max2 = 0;
        int max1Index = 0, max2Index = 0;

        for (int i = 1, num; i <= n; i++)
        {
            scanf("%d", &num);

            if (num > max1)
            {
                max2 = max1;
                max2Index = max1Index;
                max1 = num;
                max1Index = i;
            }
            else if (num > max2)
            {
                max2 = num;
                max2Index = i;
            }
        }

        printf("%d\n", max2Index);
    }

    return 0;
}
