#include <bits/stdc++.h>
using namespace std;
// Explore all combinations recursively
const int N = 20e5 + 10;
int DP[N][6];

long long PossibleCombinations(int amount, vector<int> &coins, int idx)
{
    if (amount == 0)
        return 1;
    if (amount < 0 || idx == coins.size())
        return 0;
    if (DP[amount][idx] != -1)
        return DP[amount][idx];

    long long ways = 0;
    for (int i = idx; i < coins.size(); i++) // always start from 0th index
    {
        if (amount >= coins[i])
            ways += PossibleCombinations(amount - coins[i], coins, i);
    }
    return DP[amount][idx] = ways; // Memoize
}

int main()
{
    vector<int> coins = {1, 5, 10, 25, 50};
    int amount = 17;

    memset(DP, -1, sizeof(DP)); // Initialize DP array with -1 for memoization

    long long res = PossibleCombinations(amount, coins, 0);

    cout << res << endl;

    return 0;
}
