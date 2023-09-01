// the.shoaib2
#include <stdio.h>
#include <string.h>

int main()
{
    char str[101];
    scanf("%s", str);
    int l = strlen(str);
    int count[26] = {0};
    for (int i = 0; i < l; i++)
    {
        count[str[i] - 'a']++;
    }
    int D_Count = 0;
    for (int i = 0; i < 26; i++)
    {
        if (count[i] > 0)
        {
            D_Count++;
        }
    }

    (D_Count % 2 == 0) ? printf("CHAT WITH HER!\n") : printf("IGNORE HIM!\n");
    return 0;
}
