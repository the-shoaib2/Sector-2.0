#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    vector<int> Arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> Arr[i];
    }
    sort(Arr.begin(), Arr.end());

    int m;

    cin >> m;
    while (m--)
    {
        int x;
        cin >> x;
        auto A = upper_bound(Arr.begin(), Arr.end(), x);
        auto B = A;
        if (B != Arr.begin())
            --B;

        if (B != Arr.begin())
            cout << *B << ' ';
        else
            cout << "X ";

        if (A != Arr.end())
            cout << *A << endl;
        else
            cout << "X" << endl;
    }

    return 0;
}