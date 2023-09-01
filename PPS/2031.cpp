// the.shoaib2
#include <stdio.h>
int main()
{
    int i, n;
    char A[10], B[10];
    scanf("%d", &n);
    while (n--)
    {
        scanf("%s%s", A, B);
        if (A[1] == 'e' && B[1] == 'e')
        {
            printf("Sem ganhador\n");
        }
        else if (A[1] == 't' && B[1] == 't')
        {
            printf("Aniquilacao mutua\n");
        }
        else if (A[1] == 'a' && B[1] == 'a')
        {
            printf("Ambos venceram\n");
        }
        else if (A[1] == 't'|| (A[1] == 'e' && B[1] == 'a'))
        {
            printf("Jogador 1 venceu\n");
        }
        else
        {
            printf("Jogador 2 venceu\n");
        }
    }

    return 0;
}