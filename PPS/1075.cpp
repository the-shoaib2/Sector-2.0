// the.shoaib2
#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    for (int i = 1; i <= 10000; i++)
    {
        if (i % N == 2)
            printf("%d\n", i);
    }

    return 0;
}






// {
// int n,i;
// scanf("%d",&n);
// for ( i = 1; i <= 10000; i++)
// {
//     if (i%n == 2)
//     {
//         printf("%d\n",i);
//     }
// }
//     return 0;
// }