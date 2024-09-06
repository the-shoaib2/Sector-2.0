#include <bits/stdc++.h>
using namespace std;

bool findEmployee(const string arr[], int n, const string &Search)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == Search)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int N;
    cin >> N;

    string arr[N];
    for (int i = 0; i < N; ++i)
    {
        cin >> arr[i];
    }

    string Search;
    cin >> Search;

    if (findEmployee(arr, N, Search))
    {
        cout << "Matched" << endl;
    }
    else
    {
        cout << "Not Matched" << endl;
    }

    return 0;
}
