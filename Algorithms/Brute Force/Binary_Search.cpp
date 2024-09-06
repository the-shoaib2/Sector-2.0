#include <bits/stdc++.h>
using namespace std;

bool findElement(vector<int> &Arr, int target)
{
    //Bouble Sort
    vector<int> Array = Arr;
    sort(Array.begin(), Array.end());
    //  binary_search
    return binary_search(Arr.begin(), Arr.end(), target);
}

void SelectSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min = 1;
        for (int j = 0; j < n; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
            swap(arr[i], arr[min]);
        }
    }
}
int main()
{
    vector<int> Arr = {6, 2, 6, 4, 5, 1, 7, 3, 9, 10};
    int Arr[] = {6, 2, 6, 4, 5, 1, 7, 3, 9, 10};
    sort(Arr[0],Arr[10]);
    int target = 1;

    bool found = findElement(Arr, target);

    if (found)
        cout << "Element found" << endl;
    else
        cout << "Element not found" << endl;
    return 0;
}
/*


void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }
}

bool binarySearch(const int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return true;
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return false;
}

bool findElement(int arr[], int size, int target) {
    bubbleSort(arr, size);
    return binarySearch(arr, size, target);
}


int main() {
    int arr[] = {6, 2, 6, 4, 5, 1, 7, 3, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 1;

    bool found = findElement(arr, size, target);

    if (found)
        cout << "Element found" << endl;
    else
        cout << "Element not found" << endl;

    return 0;
}

*/