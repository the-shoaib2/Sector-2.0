// the.shoaib2
#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t)
    {
        long long food = 0;
        for (int i = 0; i < t; i++)
        {
            int n;
            char str[20];
            scanf("%d %[^\n]", &n, str); // read the food name without newline character

            if (strcmp(str, "suco de laranja") == 0)
            {
                food += n * 120;
            }
            else if (strcmp(str, "morango fresco") == 0 || strcmp(str, "mamao") == 0)
            {
                food += n * 85;
            }
            else if (strcmp(str, "goiaba vermelha") == 0)
            {
                food += n * 70;
            }
            else if (strcmp(str, "manga") == 0)
            {
                food += n * 56;
            }
            else if (strcmp(str, "laranja") == 0)
            {
                food += n * 50;
            }
            else if (strcmp(str, "brocolis") == 0)
            {
                food += n * 34;
            }
        }

        (food < 110) ? printf("Mais %lld mg\n", 110 - food) : (food > 130) ? printf("Menos %lld mg\n", food - 130)
           
           
                                                                           : printf("%lld mg\n", food);
        // if (food < 110)
        // {
        //     printf("Mais %lld mg\n", 110 - food);
        // }
        // else if (food > 130)
        // {
        //     printf("Menos %lld mg\n", food - 130);
        // }
        // else
        // {
        //     printf("%lld mg\n", food);
        // }

        scanf("%d", &t); // read the next value of t
    }
    return 0;
}
