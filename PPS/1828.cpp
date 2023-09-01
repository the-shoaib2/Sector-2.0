// the.shoaib2
#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
        char arr1[10], arr2[10];
        scanf("%s %s", arr1, arr2);
        if (strcmp(arr1, arr2) == 0)
        {
            printf("Caso #%d: De novo!\n", i);
        }
        else if ((strcmp(arr1, "pedra") == 0 && strcmp(arr2, "tesoura") == 0) ||
                 (strcmp(arr1, "pedra") == 0 && strcmp(arr2, "lagarto") == 0) ||
                 (strcmp(arr1, "papel") == 0 && strcmp(arr2, "pedra") == 0) ||
                 (strcmp(arr1, "papel") == 0 && strcmp(arr2, "Spock") == 0) ||
                 (strcmp(arr1, "tesoura") == 0 && strcmp(arr2, "papel") == 0) ||
                 (strcmp(arr1, "tesoura") == 0 && strcmp(arr2, "lagarto") == 0) ||
                 (strcmp(arr1, "lagarto") == 0 && strcmp(arr2, "papel") == 0) ||
                 (strcmp(arr1, "lagarto") == 0 && strcmp(arr2, "Spock") == 0) ||
                 (strcmp(arr1, "Spock") == 0 && strcmp(arr2, "tesoura") == 0) ||
                 (strcmp(arr1, "Spock") == 0 && strcmp(arr2, "pedra") == 0))
        {
            printf("Caso #%d: Bazinga!\n", i);
        }
        else
        {
           printf("Caso #%d: Raj trapaceou!\n", i);
        }
    }
    return 0;
}
