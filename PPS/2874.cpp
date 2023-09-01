// the.shoaib2
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char binary[9];
    int n, decimal;
    while (scanf("%d", &n) != EOF)
    {
        getchar(); // Consume newline character
        for (int i = 0; i < n; i++)
        {
            scanf("%s", binary);
            getchar(); // Consume newline character
            decimal = strtol(binary, NULL, 2);
            printf("%c", decimal);
        }
        printf("\n");
    }
    return 0;
}
