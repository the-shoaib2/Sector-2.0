#include <bits/stdc++.h>
using namespace std;

void checkKey(vector<int> &arr, int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            cout << "Suuuuuuuuuuuu......" << endl;
            return;
        }
    }
    cout << "Not found" << endl;
}

int main()
{
    int key;
    cin >> key;


    vector<int> arr;

    for (int i = 0; i < 5; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }

    checkKey(arr, 10, key);

    return 0;
}

