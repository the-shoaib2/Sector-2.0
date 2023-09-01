// the.shoaib2
#include <stdio.h>
#include <string.h>

#define MAX 100001

int alice[MAX], beatriz[MAX];

int main()
{
    int a, b, x;

    while (scanf("%d %d", &a, &b) == 2 && a != 0 && b != 0)
    {
        memset(alice, 0, sizeof(alice));
        memset(beatriz, 0, sizeof(beatriz));

        int i;
        for (i = 0; i < a; i++)
        {
            scanf("%d", &x);
            alice[x]++;
        }

        for (i = 0; i < b; i++)
        {
            scanf("%d", &x);
            beatriz[x]++;
        }

        int alice_only = 0, beatriz_only = 0;
        for (i = 0; i < MAX; i++)
        {
            if (alice[i] > 0 && beatriz[i] == 0)
            {
                alice_only++;
            }
            if (beatriz[i] > 0 && alice[i] == 0)
            {
                beatriz_only++;
            }
        }

        int min_common = alice_only < beatriz_only ? alice_only : beatriz_only;
        printf("%d\n", min_common);
    }

    return 0;
}
