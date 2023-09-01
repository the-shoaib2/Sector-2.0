// the.shoaib2
#include <stdio.h>

int main()
{
    int a, b, sum = 0;
    int temp = 0;
    scanf("%d\n%d", &a, &b);
    if (a > b)
    {
        temp = a;
        a = b;
        b = temp;
    }
    for (int i = a+1; i < b; i++)
    {
        if(i%2!=0)
        sum += i;
    }
    printf("%d\n", sum);

    return 0;
}








// int main()
// {
//     int x, y, sum = 0, i;
//     int min, max;

//     scanf("%d%d", &x, &y);

//     if (x < y)
//     {
//         min = x;
//         max = y;
//     }
//     else
//     {
//         max = x;
//         min = y;
//     }

//     for (i = (min + 1); i < max; ++i)
//     {
//         if (i % 2 != 0)
//         {
//             sum += i;
//         }
//     }

//     printf("%d\n", sum);

//     return 0;
// }