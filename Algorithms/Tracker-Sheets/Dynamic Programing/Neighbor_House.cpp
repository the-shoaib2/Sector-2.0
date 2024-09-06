// 59
#include <bits/stdc++.h>
using namespace std;

int Arr[20][3];
int DP[20][3];

int Minimal(int n, int c)
{
    if (n < 0)
        return 0;

    if (DP[n][c] != -1)
        return DP[n][c];

    int ans = INT_MAX;

    for (int i = 0; i < 3; ++i)
    {
        if (i != c)
            ans = min(ans, Minimal(n - 1, i));
    }
    return DP[n][c] = ans ;
}

int main()
{

    memset(DP, -1, sizeof(DP));

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < 3; ++j)
                cin >> Arr[i][j];
        }

        int ans = min(Minimal(n - 1, 0), min(Minimal(n - 1, 1), Minimal(n - 1, 2)));
        cout << "Case " << t << ": " << ans << endl;
    }

    return 0;
}
