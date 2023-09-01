// the.shoaib2
#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);
    getchar(); // Consume the newline character after n

    while (n--)
    {
        char str[1001];
        scanf("%[^\n]", str);
        getchar(); // Consume the newline character after the string

        int len = strlen(str);
        int mid = len / 2;
        for (int i = mid - 1; i >= 0; i--)
        {
            printf("%c", str[i]);
        }
        for (int i = len - 1; i >= mid; i--)
        {
            printf("%c", str[i]);
        }
        printf("\n");
    }

    return 0;
}
