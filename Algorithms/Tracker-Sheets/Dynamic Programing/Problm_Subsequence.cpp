#include <bits/stdc++.h>

using namespace std;
const int N = 25e2 + 10;
vector<int> a(N);
int DP[N];

int lis(int i, vector<int> &a)
{
    if (DP[i] == -1)
    {
        int ans = 1;
        for (int j = 0; j < i; j++)
        {
            if (a[i] > a[j])
            {
                ans = max(ans, lis(j, a) + 1);
            }
        }
        DP[i] = ans;
    }
    return DP[i];
}

// Time Complexity: O(n^2)

int main()
{
    memset(DP, -1, sizeof(DP));
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = max(ans, lis(i, a));
    }
    cout << ans;
    return 0;
}
