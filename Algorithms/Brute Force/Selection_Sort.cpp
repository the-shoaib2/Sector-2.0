#include <iostream>
using namespace std;

void SelectSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }

        if (min != i)
        {
            swap(arr[i], arr[min]);
        }
    }
}

int main()
{
    int arr[] = {6, 2, 6, 4, 5, 1, 7, 3, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);

    SelectSort(arr, size);

    cout << "Sorted Array: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
