// the.shoaib2
#include <stdio.h>
#include <ctype.h>

int main()
{
    char first_char, current_char;
    char line[1200];
    int flag;

    while (fgets(line, 1200, stdin))
    {
        if (line[0] == '*')
            break;

        flag = 0;
        first_char = tolower(line[0]);

        for (int i = 1; line[i] != '\0' && line[i] != '\n'; i++)
        {
            current_char = tolower(line[i]);

            if (line[i - 1] == ' ' && current_char != first_char)
            {
                flag = 1;
                break;
            }
        }

        (flag == 1) ? printf("N\n") : printf("Y\n");
    }
    return 0;
}