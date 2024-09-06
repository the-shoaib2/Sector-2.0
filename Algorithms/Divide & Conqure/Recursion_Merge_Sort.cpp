#include <bits/stdc++.h>

using namespace std;


using namespace std;

void merge(int arr[], int const start, int const mid, int const end)
{
    vector<int> temp;

    merge(begin(arr) + start, begin(arr) + mid + 1,
          begin(arr) + mid + 1, end(arr),
          back_inserter(temp));

    copy(temp.begin(), temp.end(), begin(arr) + start);
}

void mergeSort(int arr[], int start, int end)
{
    if (start < end)
    {
        int mid = (start + end) / 2;
        mergeSort(arr, start, mid);
        mergeSort(arr, mid + 1, end);
        merge(arr, start, mid, end);
    }
}

int main()
{
    int arr[10] = {0, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int n = 10;
    mergeSort(arr, 0, n - 1);
    return 0;
}