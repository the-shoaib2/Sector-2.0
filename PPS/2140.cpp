// the.shoaib2
#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, count, diff;
    while (1)
    {
        scanf("%d %d", &a, &b);
        if (a == 0 && b == 0)
        {
            break;
        }

        count = 0;
        diff = abs(a - b); // for possitive value use abs

        int arr[6] = {100, 50, 20, 10, 5, 2};

        for (int i = 0; i < 6; i++)
        {
            count += diff / arr[i];
            diff = diff % arr[i];
        }

        (count == 2 && diff == 0) ? printf("possible\n") : printf("impossible\n");
        
}

return 0;
}
