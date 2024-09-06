#include <bits/stdc++.h>
using namespace std;
// Minimaum coin use
vector<int> DP;

int coinChange(vector<int> &coins, int amount)
{

    // vector<int> DP(amount + 1, -1);

    if (amount == 0)
        return 0;
    if (DP[amount] != -1)
        return DP[amount];

    int ans = INT_MAX;
    for (int coin : coins)
    {
        if (amount - coin >= 0)
            ans = min(ans + 0LL, coinChange(coins, amount - coin) + 1LL);
    }

    // return DP[amount] = ans;
    return DP[amount] = (ans == INT_MAX ? -1 : ans);
}

int main()
{

    vector<int> coins = {1, 2, 5, 10};
    int amount = 11;
    int n = coins.size();

    // fill DP -1
    DP = vector<int>(amount + 1, -1);

    int res = coinChange(coins, amount);

    cout << res << endl;

    return 0;
}

// output : 2