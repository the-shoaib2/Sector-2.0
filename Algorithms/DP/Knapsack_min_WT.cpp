// 48
#include <bits/stdc++.h>
using namespace std;

// 0/1 Knapsack

const int n = 10e9;
int Profit[105];
int Weights[105];
long long int DP[105][100005];

long long int knapsack(int idx, int target_profit)
{
    // Base cases
    if (target_profit <= 0)
        return 0;
    if (idx < 0)
        return n; // Return infinity if no items left

    long long int ans = knapsack(idx - 1, target_profit);

    if (DP[idx][target_profit] != -1)
        return DP[idx][target_profit];

    // If the current item's profit exceeds the target profit, include it
    if (Profit[idx] >= target_profit)
        return Weights[idx];
    else
        ans = min(ans, knapsack(idx - 1, target_profit - Profit[idx]) + Weights[idx]);

    // Otherwise, consider whether to include the current item or not
    return DP[idx][target_profit] = ans;
}

int main()
{
    memset(DP, -1, sizeof(DP));
    int n, P;
    cin >> n >> P; // Number of items and target profit
    for (int i = 0; i < n; i++)
        cin >> Weights[i];

    for (int i = 0; i < n; i++)
        cin >> Profit[i];

    // Find the minimum weight required to achieve at least the target profit
    long long int min_weight = n;
    for (int i = 0; i <= 100000; ++i)
        min_weight = min(min_weight, knapsack(n - 1, P + i));

    cout << min_weight << endl;
    return 0;
}
