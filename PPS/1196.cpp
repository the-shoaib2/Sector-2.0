// the.shoaib2
#include <stdio.h>
#include <string.h>

int main()
{
    char keyboard[] = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
    char line[1000];

    while (fgets(line, 1000, stdin))
    {
        int len = strlen(line);
        for (int i = 0; i < len; i++)
        {

            if (line[i] == ' ')
            {
                putchar(' ');
            }
            else
            {
                char *ptr = strchr(keyboard, line[i]);

                (ptr) ? putchar(*(ptr - 1)) : putchar(line[i]); //ternary
            }
        }
    }

    return 0;
}
