#include <bits/stdc++.h>
using namespace std;

int Profit[105];
int Weights[105]; 

long long int knapsack(int idx, int WT_left) {
    // Base cases
    if (WT_left == 0 ||idx < 0)
        return 0;
    // If the weight of the current  exceeds the remaining capacity, skip it
   long long int ans = knapsack(idx - 1, WT_left);

    // If the current  can be included, calculate the maximum value
    if (WT_left - Weights[idx] >= 0)
        ans = max(ans, knapsack(idx - 1, WT_left - Weights[idx]) + Profit[idx]);

    return ans;
}

int main() {
    int n, W;
    cin >> n >> W; 
    for (int i = 0; i < n; i++) {
        cin >> Weights[i] >> Profit[i]; 
    }
    cout << knapsack(n - 1, W) << endl; 
    return 0;
}

