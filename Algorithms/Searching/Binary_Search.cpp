#include <bits/stdc++.h>
using namespace std;

int binary_search(vector<int> &arr, int target)
{
    int low = 0;
    int high = arr.size() - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return -1; // If the target is not found
}

int main()
{
    vector<int> arr = {1, 3, 5, 7, 9, 11, 13, 15, 17};
    int target = 11;

    // binary_search(arr.begin(), arr.end(), target); if i use stl

    int result = binary_search(arr, target);
    if (result != -1)
        cout << "Element is present at index " << result << endl;
    else
        cout << "Element is not present in the array" << endl;

    return 0;
}
