#include <stdio.h>
#include <ctype.h>

int main()
{
    int n;
    scanf("%d", &n);
    getchar(); // consume newline after integer input
    for (int i = 0; i < n; i++)
    {
        char c, prev = ' ';
        while ((c = getchar()) != '\n')
        {
            if (islower(c) && !islower(prev))
            {
                putchar(c);
            }
            prev = c;
        }
        putchar('\n');
    }
    return 0;
}
