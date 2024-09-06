#include <bits/stdc++.h>

using namespace std;

int lins(int *arr, int size, int t)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == t)
            return i; // for index 
    }
    return -1;
}
int main()
{
    int n, t;

    // cout << "Enter array size: ";
    // cin >> n;

    int arr[] ={1,2,3,4,5,6,7,8,9,10};

    // cout << "Enter array: ";
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }

    // target
    cout << "Enter target: ";
    cin >> t;

    int index = lins(arr, 10, 5);

    if (index != -1)
        cout << "Target number :" << t << endl
             << "Index: " << index << endl;
    else
        cout << "Target number " << t << endl
             << " not found in the array" << endl;

    return 0;
}
