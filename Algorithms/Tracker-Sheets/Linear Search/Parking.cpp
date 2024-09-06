#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin >> t;
    int count = 0;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> Arr(n);

        for (int i = 0; i < n; i++)
            cin >> Arr[i];

        sort(Arr.begin(), Arr.end());

        int count = abs(2 * (Arr.front() - Arr.back()));

        cout << count << endl;
    }

    return 0;
} 
