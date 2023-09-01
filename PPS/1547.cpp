#include <stdio.h>
#include <math.h>
#include <limits.h>

int main()
{
    int n;
    scanf("%d", &n);

    while (n--)
    {
        int qt, s;
        scanf("%d %d", &qt, &s);

        int winner = 0;
        int closest = INT_MAX;

        for (int i = 1; i <= qt; i++)
        {
            int guess;
            scanf("%d", &guess);

            int dist = abs(s - guess);

            if (dist < closest || (dist == closest && i < winner))
            {
                closest = dist;
                winner = i;
            }
        }

        printf("%d\n", winner);
    }

    return 0;
}
