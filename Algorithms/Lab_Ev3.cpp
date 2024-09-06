#include <bits/stdc++.h>

using namespace std;

// Selection Sort function
void selectionSort(vector<int> &arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min])
                min = j;
        }
        swap(arr[i], arr[min]);
    }
}

int main()
{
    int N;
    cin >> N;

    if (N <= 4 || N > 100)
        return 1;

    vector<int> arr(N);

    for (int i = 0; i < N; i++)
        cin >> arr[i];
    int n = arr.size();

    // Use selection sort instead of sort
    selectionSort(arr, n);

    // Sorted Array
    for (int n : arr)
        cout << n << " ";

    cout << endl;

    int mid;
    if (N % 2 == 0)
        mid = (arr[N / 2 - 1] + arr[N / 2]) / 2;
    else
        mid = arr[N / 2];

    // Mid
    cout << mid << endl;

    return 0;
}
