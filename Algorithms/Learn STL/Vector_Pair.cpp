#include <bits/stdc++.h>

using namespace std;

void Print_Vector(vector<int> &arr )//,pair <int,string> &p)
{
    cout << "Size Vector : " << arr.size() << endl;
    // cout << "Size Pair : " << p.size() << endl;
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
        // cout << p.first << " " << p.second << endl;
    }
    cout << endl;
}
int main()
{
    vector<int> arr(100, -1); // fill vector  with -1 and size is 100
    pair <int, string> p ; 
    // p.first=5;
    // p.second = "Shoaib"
    p = {2,"Shoaib"};


    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x); // time complexit O(1)
    }

    sort(arr.begin(), arr.end());
    Print_Vector(arr);//,p);

    return 0;
}