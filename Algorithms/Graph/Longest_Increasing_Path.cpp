#include <bits/stdc++.h>
using namespace std;
// Longest Increasing Path in a Matrix
int dfs(vector<vector<int>> &matrix, int i, int j, vector<vector<int>> &dp)
{
    if (dp[i][j] != 0)
        return dp[i][j];

    int m = matrix.size(), n = matrix[0].size();
    vector<pair<int, int>> dirs = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};

    int max_path = 1;
    for (auto dir : dirs)
    {
        int x = i + dir.first, y = j + dir.second;
        if (x >= 0 && x < m && y >= 0 && y < n && matrix[x][y] > matrix[i][j])
            max_path = max(max_path, 1 + dfs(matrix, x, y, dp));
    }

    dp[i][j] = max_path;
    return max_path;
}

int longestIncreasingPath(vector<vector<int>> &matrix)
{
    if (matrix.empty())
        return 0;
    int m = matrix.size(), n = matrix[0].size();
    vector<vector<int>> dp(m, vector<int>(n, 0));
    int max_path = 0;

    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
            max_path = max(max_path, dfs(matrix, i, j, dp));
    }

    return max_path;
}

int main()
{
    int m, n;

    cin >> m >> n;

    vector<vector<int>> matrix(m, vector<int>(n));

    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
            cin >> matrix[i][j];
    }

    int result = longestIncreasingPath(matrix);
    cout << result << endl;
    return 0;
}
/*

9 9 4
6 6 8
2 1 1



Input: matrix = [[9,9,4],[6,6,8],[2,1,1]]
Output: 4
Explanation: The longest increasing path is [1, 2, 6, 9]


*/
