// the.shoaib2

#include <stdio.h>

int main()
{
    int t, num;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d", &num);
        int sum = 0;
        for (int j = 1; j < num; j++)
        {
            if (num % j == 0)
            {
                sum += j;
            }
        }

        (sum == num) ? printf("%d eh perfeito\n", num) : printf("%d nao eh perfeito\n", num);
    }
    return 0;
}

// #include <stdio.h>
// int main()
// {
//     int t, num;
//     scanf("%d", &t);
//     for (int i = 0; i < t; i++)
//     {
//         scanf("%d", &num);
//         (num % 2 == 0) ? printf("%d eh perfeito\n", num) : printf("%d nao eh perfeito\n", num);
//     }

//     return 0;
// }