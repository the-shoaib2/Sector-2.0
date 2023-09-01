// the.shoaib2
#include <stdio.h>
#include <string.h>
int main()
{
    char str[101];
    scanf("%d", str);
    int count = 0;
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == '1')
            count++;
    }
    if (count%2 ==0)
    printf("%s0\n",str);
    else
    printf("%s1\n",str);
    return 0;
}