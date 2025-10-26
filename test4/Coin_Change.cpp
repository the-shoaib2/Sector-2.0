
#include <stdio.h>

// bubble sort descending order

void BubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int coin_chage(int arr[], int n, int a)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        count += a / arr[i];
        a = a % arr[i];
    }
    return count;
}

int main()
{

    int n;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int a;
    scanf("%d", &a);

    // decending 
    BubbleSort(arr, n);

    // int c = coin_chage(arr, n, a);

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        count += a / arr[i];
        a = a % arr[i];
    }

    printf("%d\n", count);
/*
Input:
    4
    10 5 2 1
    39
Ountput:
    6
    
*/
    return 0;
}