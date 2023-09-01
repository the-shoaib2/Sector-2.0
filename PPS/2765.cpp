// the.shoaib2
#include <stdio.h>
#include <string.h>

int main()
{
    char arr[1000];
    while (fgets(arr, 1000, stdin) != NULL)
    {
        char *comma = strchr(arr, ',');
        if (comma != NULL)
        {
            *comma = '\0';
            printf("%s\n", arr);
            printf("%s", comma + 1);
        }
    }
    return 0;
}
