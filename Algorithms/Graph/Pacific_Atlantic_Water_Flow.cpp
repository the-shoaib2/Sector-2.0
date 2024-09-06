#include <bits/stdc++.h>
using namespace std;

void dfs(vector<vector<int>> &heights, vector<vector<bool>> &ocean, int i, int j, int prev)
{
    int m = heights.size();
    int n = heights[0].size();

    // Check boundary conditions and whether the current cell can flow to the ocean
    if (i < 0 || i >= m || j < 0 || j >= n || ocean[i][j] || heights[i][j] < prev)
    {
        return;
    }

    ocean[i][j] = true;

    // Perform DFS in all four directions
    dfs(heights, ocean, i + 1, j, heights[i][j]);
    dfs(heights, ocean, i - 1, j, heights[i][j]);
    dfs(heights, ocean, i, j + 1, heights[i][j]);
    dfs(heights, ocean, i, j - 1, heights[i][j]);
}

vector<vector<int>> pacificAtlantic(vector<vector<int>> &heights)
{
    if (heights.empty())
        return {};

    int m = heights.size();
    int n = heights[0].size();

    vector<vector<bool>> pacific(m, vector<bool>(n, false));
    vector<vector<bool>> atlantic(m, vector<bool>(n, false));

    // DFS from border cells
    for (int i = 0; i < m; ++i)
    {
        dfs(heights, pacific, i, 0, INT_MIN);
        dfs(heights, atlantic, i, n - 1, INT_MIN);
    }

    for (int j = 0; j < n; ++j)
    {
        dfs(heights, pacific, 0, j, INT_MIN);
        dfs(heights, atlantic, m - 1, j, INT_MIN);
    }

    // Find intersection of cells marked for both oceans
    vector<vector<int>> result;
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (pacific[i][j] && atlantic[i][j])
            {
                result.push_back({i, j});
            }
        }
    }

    return result;
}

int main()
{
    int m, n;
    cin >> m >> n;

    vector<vector<int>> heights(m, vector<int>(n));
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cin >> heights[i][j];
        }
    }

    vector<vector<int>> result = pacificAtlantic(heights);

    cout << "Output:" << endl;
    for (const auto &cell : result)
    {
        cout << "[" << cell[0] << "," << cell[1] << "]" << " ";
    }
    cout << endl;

    return 0;
}

// Input: heights = [[1,2,2,3,5],[3,2,3,4,4],[2,4,5,3,1],[6,7,1,4,5],[5,1,1,2,4]]
// Output: [[0,4],[1,3],[1,4],[2,2],[3,0],[3,1],[4,0]]
// Explanation: The following cells can flow to the Pacific and Atlantic oceans, as shown below:
// [0,4]: [0,4] -> Pacific Ocean
//        [0,4] -> Atlantic Ocean
// [1,3]: [1,3] -> [0,3] -> Pacific Ocean
//        [1,3] -> [1,4] -> Atlantic Ocean
// [1,4]: [1,4] -> [1,3] -> [0,3] -> Pacific Ocean
//        [1,4] -> Atlantic Ocean
// [2,2]: [2,2] -> [1,2] -> [0,2] -> Pacific Ocean
//        [2,2] -> [2,3] -> [2,4] -> Atlantic Ocean
// [3,0]: [3,0] -> Pacific Ocean
//        [3,0] -> [4,0] -> Atlantic Ocean
// [3,1]: [3,1] -> [3,0] -> Pacific Ocean
//        [3,1] -> [4,1] -> Atlantic Ocean
// [4,0]: [4,0] -> Pacific Ocean
//        [4,0] -> Atlantic Ocean
// Note that there are other possible paths for these cells to flow to the Pacific and Atlantic oceans.