// the.shoaib2
#include <stdio.h>
#include <string.h>

int main()
{

    char str[502];
    scanf("%[^\n]", str);
    int len = strlen(str);
    (len <= 80) ? printf("YES\n") : printf("NO\n");
    return 0;
}
