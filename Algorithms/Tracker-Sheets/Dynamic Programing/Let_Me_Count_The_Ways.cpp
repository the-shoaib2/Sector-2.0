//70
#include <bits/stdc++.h>
using namespace std;

const int SIZE = 30001;

unsigned long long ways[SIZE];

void calculateWays(const vector<int> &coins)
{
    ways[0] = 1;
    for (int coin : coins)
    {
        for (int i = coin; i < SIZE; ++i)
        {
            ways[i] += ways[i - coin];
        }
    }
}

int main()
{
    vector<int> changeTypes = {1, 5, 10, 25, 50};
    calculateWays(changeTypes);

    int amount;
    while (cin >> amount)
    {
        if (ways[amount] == 1)
            cout << "There is only 1 way to produce " << amount << " cents change.\n";
        else
            cout << "There are " << ways[amount] << " ways to produce " << amount << " cents change.\n";
    }

    return 0;
}

/*
this code has a time limit error

const int N = 30010;
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
    int n;
    while (cin >> n)
    {
        memset(DP, -1, sizeof(DP));
        int ans = PossibleCombinations(n, coins, 0);

        if (ans == 1)
            cout << "There are 1 ways to produce" << n << "cents change." << endl;
        else
            cout << "There are " << ans << " ways to produce " << n << " cents change." << endl;
    }
    return 0;
}



*/