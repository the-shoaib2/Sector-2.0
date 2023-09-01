// the.shoaib2
#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    char str[100];
    scanf("%d", &t);
    while (t--)
    {
        scanf("%s", str);
        int len = strlen(str);
        for (int i = len - 1; i >= 0; i--)
        {
            if (str[i] >= 'a' && str[i] <= 'z')
            {
                printf("%c", str[i]);
            }
        }
        printf("\n");
    }
    return 0;
}
