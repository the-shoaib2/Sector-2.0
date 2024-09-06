#include <bits/stdc++.h>
using namespace std;
// minimaum coi n use
const int N = 20e5 + 10;
int DP[N];

int Fun(vector<int> &coins, int amount)
{
    if (amount == 0)
        return 0;
    if (DP[amount] != -1)
        return DP[amount];

    int ans = INT_MAX;
    for (int coin : coins)
    {
        if (amount - coin >= 0)
            ans = min(ans + 0LL, Fun(coins, amount - coin) + 1LL);
    }

    return DP[amount] = ans;
}

int coinChange(vector<int> &coins, int amount)
{
    int ans = Fun(coins, amount);
    return ans == INT_MAX ? -1 : ans;
}

int main()
{
    memset(DP, -1, sizeof(DP));

    vector<int> coins = {1, 2, 5, 10};
    int amount = 11;

    int res = coinChange(coins, amount);

    cout << res << endl;

    return 0;
}
