
#include <stdio.h>
#include <string.h>

this is an articale char *m_strtok(char *str, const char *delim)
{
    static char *current = NULL;

    if (str != NULL)
        current = str;

    //  this function is used to tokenize a string based on delimiters
    // It returns the next token found in the string or NULL if no more tokens are available
    if (current == NULL)
        return NULL;

    while (*current && (*current == ' ' || *current == '\n'))
        current++;

    if (*current == '\0')
        return NULL;

    char *start = current;

    while (*current && *current != ' ' && *current != '\n')
        current++;

    if (*current)
    {
        *current = '\0';
        current++;
    }
    else
    {
        current = NULL;
    }

    return start;
}





int main()
{
    char str[2048];
    int a = 0, an = 0, the = 0;
    printf("Input :\n");
    fgets(str, sizeof(str), stdin);

    char *word = strtok(str, " \n");

    while (word != NULL)
    {

        printf("Token: %s\n", word);

        if (strcmp(word, "a") == 0)
            a++;
        else if (strcmp(word, "an") == 0)
            an++;
        else if (strcmp(word, "the") == 0)
            the++;

        word = strtok(NULL, " \n");
    }

    printf("articles :\n");
    printf("a: %d\n", a);
    printf("an: %d\n", an);
    printf("the: %d\n", the);
    return 0;
}
