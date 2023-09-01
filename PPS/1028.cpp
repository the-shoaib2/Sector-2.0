// the.shoaib2
#include <stdio.h>
int main()
{
    int N, F1, F2, Temp;
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d %d", &F1, &F2);
        do
        {
            Temp = F2;
            F2 = F1 % F2;
            F1 = Temp;
        } while (F2 != 0);
        printf("%d\n", F1);
    }
    return 0;
}
