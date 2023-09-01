// the.shoaib2
#include <stdio.h>
#include <string.h>
int main()
{
    int t, b;
    char str[100];
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%s %d", str, &b);

        if (!strcmp(str, "Thor"))
        {
            printf("Y\n");
        }
        else
        {
            printf("N\n");
        }
    }
    return 0;
}