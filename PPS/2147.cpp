// the.shoaib2
#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    while (n--)
    {
        char x[10001];
        scanf("%s", x);

        int c = strlen(x);
        double z = 0.01 * c;

        printf("%.2lf\n", z);
    }
    return 0;
}