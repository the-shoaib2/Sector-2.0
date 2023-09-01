// the.shoiab2
#include <stdio.h>

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);

}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    int result = gcd(a, b);
    printf("%d\n", result);

    return 0;
}



// #include <stdio.h>

// int main() {
//     int a, b;
//     scanf("%d %d", &a, &b);

//     while (b != 0) {
//         int temp = b;
//         b = a % b;
//         a = temp;
//     }

//     int result = a;
//     printf("%d\n", result);

//     return 0;
// }
