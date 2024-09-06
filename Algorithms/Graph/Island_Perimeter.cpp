#include <bits/stdc++.h>
using namespace std;

int islandPerimeter(vector<vector<int>> &grid)
{
    int perimeter = 0;
    int m = grid.size();
    int n = grid[0].size();

    // Directions: up, down, left, right
    vector<pair<int, int>> dirs = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (grid[i][j] == 1)
            {
                // For each land cell, count the number of neighboring water cells
                for (auto it = dirs.begin(); it != dirs.end(); ++it)
                {
                    int dx = it->first;
                    int dy = it->second;
                    int ni = i + dx;
                    int nj = j + dy;
                    if (ni < 0 || ni >= m || nj < 0 || nj >= n || grid[ni][nj] == 0)
                    {
                        // If the neighboring cell is out of bounds or water, increment perimeter
                        ++perimeter;
                    }
                }
            }
        }
    }

    return perimeter;
}

int main()
{
    int m, n;
    cin >> m >> n;

    vector<vector<int>> grid(m, vector<int>(n));

    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cin >> grid[i][j];
        }
    }

    cout  << islandPerimeter(grid) << endl;

    return 0;
}


/*
Input:
4 4
0 1 0 0
1 1 1 0
0 1 0 0
1 1 0 0
Output: 16


grid = [[0,1,0,0],[1,1,1,0],[0,1,0,0],[1,1,0,0]]
Explanation: The perimeter is the 16 yellow stripes in the image above.

*/
