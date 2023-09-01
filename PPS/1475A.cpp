// the.shoaib2
#include <stdio.h>

int hasOddDivisor(long long n)
{
    while (n % 2 == 0)
    {
        n /= 2;
    }
    return n > 1;
}

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        long long n;
        scanf("%lld", &n);

        (hasOddDivisor(n)) ? printf("YES\n") : printf("NO\n");
    }

    return 0;
}




// #include <stdio.h>
// int main()
// {
//     int t;
//     scanf("%d", &t);
//     while (t--)
//     {
//         long long n;
//         scanf("%lld", &n);

//         while (n % 2 == 0)
//         {
//             n /= 2;
//         }

//         (n > 1) ? printf("YES\n") : printf("NO\n");
//     }

//     return 0;
// }
