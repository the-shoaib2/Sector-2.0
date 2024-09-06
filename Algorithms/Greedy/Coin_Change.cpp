#include<bits/stdc++.h>
using namespace std;

#define MAX 100

int ans[MAX];

int coinChange(vector<int>& coins, int amount) {
    int count = 0;
    for (int i = 0; i < coins.size(); i++) {
        if (amount == 0)
            break;
        while (amount >= coins[i]) {
            amount -= coins[i];
            ans[count] = coins[i];
            count++;
        }
    }

    return (amount == 0) ? count : -1;
}

int main() {
    vector<int> arr = {5, 2, 1};
    int amount = 11;
    int numCoins = coinChange(arr, amount);
    cout << "Number of coins required: " << numCoins << endl;

    cout << "Coins used: ";
    for (int i = 0; i < numCoins; i++) {
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}
