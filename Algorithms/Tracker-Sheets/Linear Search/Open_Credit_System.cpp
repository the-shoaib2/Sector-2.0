#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> Arr(n);

        for (int i = 0; i < n; i++)
            cin >> Arr[i];

        sort(Arr.begin(), Arr.end());

        if (n % 2 == 0)
            cout << -1 << endl;
        else
        {
            int ans = Arr[n / 2] - Arr[n / 2 - 1];
            cout << ans << endl;
        }
    }

    return 0;
}
