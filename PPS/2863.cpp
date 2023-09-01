// the.shoaib2
#include <stdio.h>

int main()
{
    int t;
    float time, ft; // ft means fastest_time

    while (scanf("%d", &t) != EOF)
    {
        ft = 11; // set initial fastest time to 11 seconds

        for (int i = 0; i < t; i++)
        {
            scanf("%f", &time);
            if (time < ft)
            {
                ft = time;
            }
        }

        printf("%.2f\n", ft); // print the fastest time with 2 decimal places
    }

    return 0;
}
