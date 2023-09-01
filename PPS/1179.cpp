// the.shoaib2
#include <stdio.h>

int main()
{
    int n, l = 0, k = 0;
    int Even[5], Odd[5];
    for (int i = 0; i < 15; i++)
    {
        scanf("%d", &n);
        if (n % 2 == 0) // even number
        {
            Even[l] = n;
            l++;
            if (l == 5)
            {
                for (int j = 0; j < 5; j++)
                {
                    printf("par[%d] = %d\n", j, Even[j]);
                    Even[j] = 0;
                }
                l = 0;
            }
        }
        else
        {
            Odd[k] = n;
            k++;
            if (k == 5) // odd number
            {
                for (int j = 0; j < 5; j++)
                {
                    printf("impar[%d] = %d\n", j, Odd[j]);
                    Odd[j] = 0;
                }
                k = 0;
            }
        }
    }
    for (int i = 0; i < k; i++) // odd number
    {
        if (Odd[i] == 0)
        {
            break;
        }
        printf("impar[%d] = %d\n", i, Odd[i]);
    }
    for (int i = 0; i < l; i++) // even number
    {
        if (Even[i] == 0)
        {
            break;
        }
        printf("par[%d] = %d\n", i, Even[i]);
    }

    return 0;
}
