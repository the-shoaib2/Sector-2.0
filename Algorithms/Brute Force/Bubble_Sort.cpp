#include <stdio.h>

// Bubble Sort function
void BubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int n;
    int arr[n];

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    // Use Bubble Sort instead of Selection Sort
    BubbleSort(arr, n);
    // Sorted Arraya
    printf("Sorted Array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", arr[i]);
    }
    printf("\n");

    return 0;
}
