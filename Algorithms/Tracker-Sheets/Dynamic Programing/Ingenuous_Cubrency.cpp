#include <bits/stdc++.h>

using namespace std;

const int MAX_AMOUNT = 10000;
const int MAX_CUBE = 21; // Maximum cubic number available in Cubeland

int main() {
    vector<long long> dp(MAX_AMOUNT + 1, 0); // Initialize dp array

    // Initialize base case: 1 way to pay 0 amount
    dp[0] = 1;

    // Precompute cubic numbers
    vector<int> cubicNumbers;
    for (int i = 1; i <= MAX_CUBE; ++i) {
        cubicNumbers.push_back(i * i * i);
    }

    // Compute number of ways for each amount
    for (int coin : cubicNumbers) {
        for (int amount = coin; amount <= MAX_AMOUNT; ++amount) {
            dp[amount] += dp[amount - coin];
        }
    }

    int amount;
    while (cin >> amount) {
        cout << dp[amount] << endl;
    }

    return 0;
}



