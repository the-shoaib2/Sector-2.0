// the.shoaib2
#include <stdio.h>
#include <string.h>

int main()
{

    int sum = 0, count = 1;
    char str[10];

    while (count <= 3)
    {
        while (1)
        {
            scanf("%s", &str);
            if (strcmp(str, "caw") == 0)
            {
                scanf("%s", &str);
                count++;
                break;
            }
            else
            {
                if (str[0] == '*')
                    sum += 4;
                if (str[1] == '*')
                    sum += 2;
                if (str[2] == '*')
                    sum += 1;
            }
        }
        printf("%d\n", sum);
        sum = 0;
    }

    return 0;
}