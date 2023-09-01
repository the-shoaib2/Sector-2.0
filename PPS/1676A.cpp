// the.shoaib2
#include <stdio.h>
#include <string.h>

int main()
{
    int t,sum1 = 0, sum2 = 0;
    scanf("%d", &t);

    while (t--)
    {
        char ticket[7];
        scanf("%s", ticket);

        for (int i = 0; i < 3; i++)
            sum1 += ticket[i] ;

        for (int i = 3; i < 6; i++)
            sum2 += ticket[i];


        (sum1 == sum2) ? printf("YES\n") : printf("NO\n");

    }

    return 0;
}
