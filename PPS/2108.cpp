//the.shoaib2
#include <stdio.h>
#include <string.h>
int main()
{
    char str[101];
    char max[101] = "";

    while (fgets(str, 101, stdin))
    {
        if (str[0] == '0')
        {
            printf("\nThe biggest word: %s\n", max);
            break;
        }

        int len = strlen(str);
        if (len > 0 && str[len - 1] == '\n')
        {
            str[len - 1] = '\0'; // remove newline character
        }

        int word_len = 0;
        for (int i = 0; i <= len; i++)
        {
            if (str[i] == ' ' || str[i] == '\0')
            {
                if (word_len > 0)
                {
                    printf("%d-", word_len);
                    if (word_len >= strlen(max))
                    {
                        strcpy(max, str + i - word_len);
                    }
                    word_len = 0;
                }
            }
            else
            {
                word_len++;
            }
        }
        printf("\n");
    }

    return 0;
}
