// the.shoaib2
#include <stdio.h>
int main()
{
    char arr[1001];
    while (scanf("%s", arr) == 1)
    {
        int n;
        scanf("%d", &n);
        int index;
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &index);
            printf("%c", arr[index - 1]);
        }
        printf("\n");
    }

    return 0;
}