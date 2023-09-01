// the.shaoib2
#include <stdio.h>

int main()
{
    // use arry
    int n;
    int fib[46] = {0, 1}; // Initialize the first two Fibonacci numbers
    scanf("%d", &n);
    for (int i = 2; i <= n; i++)
        fib[i] = fib[i - 1] + fib[i - 2]; // Compute the next Fibonacci number
    for (int i = 0; i <= n; i++)
    {
        printf("%d", fib[i]);
        if (i < n)
            printf(" ");
    }
    printf("\n");
    // use for loop
    //  int n, a = 0, b = 1, c;
    //  scanf("%d", &n);
    //  printf("%d %d", a, b);
    //  for (int i = 3; i <= n; i++)
    //  {
    //      c = a + b;
    //      printf(" %d", c);
    //      a = b;
    //      b = c;
    //  }
    //  printf("\n");
    return 0;
}
