#include <bits/stdc++.h>
using namespace std;
// Possible Way  

vector<vector<long long>> dp;

long long PossibleCombinations(int amount, vector<int> &coins, int idx)
{
    // Base cases
    if (amount == 0)
        return 1;
    if (amount < 0 || idx == coins.size())
        return 0;
    if (dp[amount][idx] != -1)
        return dp[amount][idx];

    // Recursive case
    long long ways = 0;
    for (int i = idx; i < coins.size(); i++)
    {
        if (amount >= coins[i])
            ways += PossibleCombinations(amount - coins[i], coins, i);
    }

    // Memoize the result
    return dp[amount][idx] = ways;
}

int main()
{
    vector<int> coins = {1, 5, 10, 25, 50};
    int amount = 17;
    int n = coins.size();

    // Initialize dp array with -1 for memoization
    dp = vector<vector<long long>>(amount + 1, vector<long long>(n + 1, -1));

    // Calculate the number of possible combinations
    long long res = PossibleCombinations(amount, coins, 0);

    // Output the result
    cout << res << endl;

    return 0;
}

// output:
// 6


