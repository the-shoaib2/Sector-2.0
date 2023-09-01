#include <stdio.h>

int binarySearch(int arr[], int n, int data)
{
    int left = 0;
    int right = n - 1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (arr[mid] == data)
        {
            return mid; // Element found, return its index
        }
        else if (arr[mid] < data)
        {
            left = mid + 1; // data is in the right half
        }
        else
        {
            right = mid - 1; // data is in the left half
        }
    }

    return -1; // Element not found
}

int main()
{
    int n, data;

    printf("Enter the n of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements in ascending order:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number to search: ");
    scanf("%d", &data);

    int result = binarySearch(arr, n, data);
    if (result != -1)
    {
        printf("Element found at index %d.\n", result);
    }
    else
    {
        printf("Element not found in the array.\n");
    }

    return 0;
}
