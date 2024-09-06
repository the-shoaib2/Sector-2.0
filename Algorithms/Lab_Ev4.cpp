#include <bits/stdc++.h>

using namespace std;

// Selection Sort function
void insertionSort(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
}

int main()
{
    int N = 7;
    // cin >> N;

    int arr[N] = {48, 23, 19, 42, 56, 66, 11}; // Fixed-size array

    // for (int i = 0; i < N; i++) {
    //     cin >> arr[i];
    // }

    insertionSort(arr, N);

    for (int i = 0; i < N; i++)
    {
        cout << arr[i] << " ";
    }

    int mid = (arr[0] + arr[N - 1]) / 2;

    if (N % 2 == 0)
    {
        cout << endl
             << mid + 1 << endl;
    }
    else
    {
        cout << endl
             << mid << endl;
    }

    return 0;
}
