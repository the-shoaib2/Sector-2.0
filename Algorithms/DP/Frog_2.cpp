// 57
#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
int k;
int dp[N];
int arr[N];

int Forg(int n)
{
    if (n == 0)
        return 0;
    if (dp[n] != -1)
        return dp[n];
    int count = INT_MAX;

    for (int i = 1; i <= k; i++)
    {
        if (n - i >= 0)
            count = min(count, Forg(n - i) + abs(arr[n] - arr[n - i]));
    }
    return dp[n] = count;
}

int main()
{
    memset(dp, -1, sizeof(dp));
    int n;
    cin >> n >> k;
    for (int i = 0; i < n; ++i)
        cin >> arr[i];
    cout << Forg(n - 1) << endl;

    return 0;
}
