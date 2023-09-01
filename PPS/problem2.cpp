// the.shoaib2
#include <stdio.h>

void print(int n);

int main()
{
    int n;
    scanf("%d", &n);

    print(n);

    return 0;
}


void print(int n)
{
    long long int term = 1;
    printf("%lld", term);

    for (int i = 1; i < n; i++)
    {
        term *= n;
        printf(" + %lld", term);
    }
}

// #include <stdio.h>

// int main() {
//     int n;
//     scanf("%d", &n);

//     long long int term = 1;
//     printf("%lld", term);

//     for (int i = 1; i < n; i++) {
//         term *= n;
//         printf(" + %lld", term);
//     }

//     return 0;
// }
