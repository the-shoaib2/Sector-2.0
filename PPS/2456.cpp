// the.shoaib2
#include <stdio.h>

int main()
{
    int arr[5];
    int i;
    int A = 0, B = 0, C = 0;

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 1; i < 4; i++)
    {
        if (arr[i] < arr[i + 1] && arr[i - 1] < arr[i])
            A++;

        else if (arr[i] > arr[i + 1] && arr[i - 1] > arr[i])
            B++;

        else
        {
            C = 3;
            break;
        }
    }

    if (A == 3)
        printf("C\n");

    else if (B == 3)
        printf("D\n");

    else if (C == 3)
        printf("N\n");

    return 0;
}