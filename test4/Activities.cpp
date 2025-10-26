// 1. No 
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int start[n], finish[n];

    for (int i = 0; i < n; i++)
        scanf("%d", &start[i]);

    for (int i = 0; i < n; i++)
        scanf("%d", &finish[i]);

    // Sort Bubble Sort
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (finish[i] > finish[j])
            {

                int temp = finish[i];
                finish[i] = finish[j];
                finish[j] = temp;

                temp = start[i];
                start[i] = start[j];
                start[j] = temp;
            }
        }
    }

    int count = 1;
    int last_finish = finish[0];

    for (int i = 1; i < n; i++)
    {
        if (start[i] > last_finish)
        {
            count++;
            last_finish = finish[i];
        }
    }

    printf("%d\n", count);

    return 0;
}