#include <bits/stdc++.h>
using namespace std;

int Profit[10005];
int Weights[100005];
long long int DP[105][100005]; // Memoization array

long long int knapsack(int idx, int WT_left)
{
    // Base cases
    if (WT_left == 0 || idx < 0)
        return 0;

    if (DP[idx][WT_left] != -1)
        return DP[idx][WT_left];

    // If the weight of the current  exceeds the remaining capacity, skip it
    long long int ans = knapsack(idx - 1, WT_left);

    // If the current  can be included, calculate the maximum value
    if (WT_left - Weights[idx] >= 0)
        ans = max(ans, knapsack(idx - 1, WT_left - Weights[idx]) + Profit[idx]);

    return DP[idx][WT_left] = ans;
}

int main()
{
    memset(DP, -1, sizeof(DP));
    int n, W;
    cin >> n >> W;
    for (int i = 0; i < n; i++)
    {
        cin >> Weights[i]; // this input is line by line
    }
    for (int i = 0; i < n; i++)
    {
        cin >> Profit[i]; // this input is line by line
    }

    long long int res = knapsack(n - 1, W);
    int count = 0;
    for (int i = 0; i <= n; i++)
    {
        if (DP[i] == 0)
            count = 1;
        break;
    }

    // Report to the King
    if (res % 2 == 0)
        cout << "My King, I am successful in capturing the big fish. Immortality is few steps away." << endl;

    else
        cout << "My King, I have captured " << res << " followers till now and I need more soldiers asap." << endl;

    return 0;
}
