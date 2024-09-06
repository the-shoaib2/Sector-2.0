#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 105;

int P[MAX_N];
int W[MAX_N];
int dp[MAX_N][MAX_N];
int dp_calls = 0;

int knapsack(int i, int w)
{
    dp_calls++;

    if (i == 0 || w == 0)
        return 0;

    if (dp[i][w] != -1)
        return dp[i][w];

    int ans = 0;

    if (W[i - 1] > w)
        ans = knapsack(i - 1, w);
    else
        ans = max(knapsack(i - 1, w), P[i - 1] + knapsack(i - 1, w - W[i - 1]));
    return dp[i][w] = ans;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        memset(dp, -1, sizeof(dp));
        dp_calls = 0;

        int N;
        cin >> N;

        for (int i = 0; i < N; ++i)
            cin >> P[i] >> W[i];

        int F;
        cin >> F;
        int FW[MAX_N];

        for (int i = 0; i < F; ++i)
            cin >> FW[i];

        int maxVal = 0;

        for (int i = 0; i < F; ++i)
            maxVal += knapsack(N, FW[i]);

        cout << maxVal << endl;
        cout << dp_calls << endl;
    }
    return 0;
}
