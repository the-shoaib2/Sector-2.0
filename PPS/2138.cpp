// the.shoaib2
#include <stdio.h>
#include <string.h>

int main()
{
    char str[1002];
    while (scanf("%s", str) == 1)
    {
        int a[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
        int len = strlen(str);
        for (int i = 0; i < len; i++)
        {

            ((str[i] == '0')) ? a[0]++
            : (str[i] == '1') ? a[1]++
            : (str[i] == '2') ? a[2]++
            : (str[i] == '3') ? a[3]++
            : (str[i] == '4') ? a[4]++
            : (str[i] == '5') ? a[5]++
            : (str[i] == '6') ? a[6]++
            : (str[i] == '7') ? a[7]++
            : (str[i] == '8') ? a[8]++
            : (str[i] == '9') ? a[9]++
                              : 0;
        }
        int large = a[0], index = 0;
        for (int i = 1; i < 10; i++)
        {
            if (a[i] >= large)
            {
                large = a[i];
                index = i;
            }
        }
        printf("%d\n", index);
    }
    return 0;
}
