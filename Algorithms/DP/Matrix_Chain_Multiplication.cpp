#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> dp;

int MatrixChainOrder(const vector<int> &dims, int i, int j)
{
    if (i == j)

        return 0;
    
    if (dp[i][j] != -1)
        return dp[i][j];
    
    dp[i][j] = INT_MAX;
    for (int k = i; k < j; ++k)
    {
        int cost = MatrixChainOrder(dims, i, k) + MatrixChainOrder(dims, k + 1, j) + dims[i - 1] * dims[k] * dims[j];
        dp[i][j] = min(dp[i][j], cost);
    }
    return dp[i][j];
}

int main()
{
    vector<int> dimensions = {10, 20, 30, 40, 30};
    int n = dimensions.size();
    dp.assign(n, vector<int>(n, -1));
    int minCost = MatrixChainOrder(dimensions, 1, n - 1);
    cout << "Minimum cost of matrix chain multiplication: " << minCost << endl;
    return 0;
}



Minimum cost of matrix chain multiplication: 30000