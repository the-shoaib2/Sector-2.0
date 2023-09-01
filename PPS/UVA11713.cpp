// the.shaaib2
#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char a[100], b[100];
        scanf("%s %s", a, b);
        int lenA = strlen(a);
        int lenB = strlen(b);
        if (lenA != lenB)
        {
            printf("No\n");
            continue;
        }
        for (int i = 0; i < lenA; i++)
        {
            if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u')
            {
                a[i] = 'a';
            }
            if (b[i] == 'a' || b[i] == 'e' || b[i] == 'i' || b[i] == 'o' || b[i] == 'u')
            {
                b[i] = 'a';
            }
        }
        (strcmp(a, b) == 0) ? printf("Yes\n") : printf("No\n");
    }
    return 0;
}
