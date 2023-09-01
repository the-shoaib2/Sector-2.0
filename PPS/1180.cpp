// the.shoaib2
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int min_val = arr[0];
    int min_pos = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < min_val)
        {
            min_val = arr[i];
            min_pos = i;
        }
    }

    printf("Menor valor: %d\n", min_val);
    printf("Posicao: %d\n", min_pos);

    return 0;
}