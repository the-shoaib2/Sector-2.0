// the.shoaib2
#include <stdio.h>
#include <string.h>
int main()
{
    long long int num;
    int remainder;
    while (scanf("%lld", &num) != EOF)
    {
        while (num)
        {
            remainder = num % 10;
            num = num / 10;
            printf("%d", remainder);
        }
        printf("\n");
    }
    return 0;
}


// int main()
// {
//     int num, remainder, reve = 0;
//     scanf("%d", &num);
//     while (num != 0)
//     {
//         remainder = num % 10;
//         reve = reve * 10 + remainder;
//         num /= 10;
//     }
//     printf("%d\n", reve);

//     return 0;
// }