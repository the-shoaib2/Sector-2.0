// the.shaoib2
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    getchar(); // consume the newline character after the integer input
    for (int i = 0; i < n; i++)
    {
        int x;
        scanf("%d", &x);
        getchar(); // consume the newline character after the integer input
        if (x == 0)
        {
            printf("0\n");
        }
        else if (x % 2 == 0)
        {
            printf("*\n");
        }
        else
        {
            printf("%c\n", (x > 0 ? '+' : '-'));
        }
    }
    return 0;
}