//24
#include <bits/stdc++.h>
using namespace std;
#define N 100001
int main()
{
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    vector<bool> Arr(N * 5, false);

    sort(a.begin(), a.end());

    int r = n - 1;
    int p = 0;
    for (int i = n - 2; i >= 0; i--)
    {
        if (a[r] >= 2 * a[i])
        {
            p++;
            r--;
        }
    }

    if (n % 2)
    {
        if (p > n / 2)
            cout << (n / 2 + 1) << endl;
        else
            cout << (n - p) << endl;
    }
    else
    {
        if (p > n / 2)
            cout << (n / 2) << endl;
        else
            cout << (n - p) << endl;
    }

    return 0;
}
