#include <bits/stdc++.h>
using namespace std;

void dfs(vector<vector<int>> &image, int sr, int sc, int newColor, int oldColor)
{
    if (sr < 0 || sc < 0 || sr >= image.size() || sc >= image[0].size() || image[sr][sc] != oldColor)
        return;

    if (image[sr][sc] == newColor)
        return;

    image[sr][sc] = newColor;

    dfs(image, sr + 1, sc, newColor, oldColor); // Down
    dfs(image, sr - 1, sc, newColor, oldColor); // Up
    dfs(image, sr, sc + 1, newColor, oldColor); // Right
    dfs(image, sr, sc - 1, newColor, oldColor); // Left
}

vector<vector<int>> floodFill(vector<vector<int>> &image, int sr, int sc, int newColor)
{
    int oldColor = image[sr][sc];
    dfs(image, sr, sc, newColor, oldColor);
    return image;
}

int main()
{
    int rows, cols;
    cin >> rows >> cols;

    vector<vector<int>> image(rows, vector<int>(cols));

    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
            cin >> image[i][j];
    }

    int sr, sc, color; // sr - source row, sc- source colum
    cin >> sr >> sc >> color;

    vector<vector<int>> result = floodFill(image, sr, sc, color);
     
    cout << "Output:" << endl;
    for (const auto &row : result)
    {
        for (int i : row)
            cout << i << " ";
        cout << endl;
    }

    return 0;
}

// Input:
// 3 3
// 1 1 1
// 1 1 0
// 1 0 1
// 1 1 2

// Output:
// 2 2 2
// 2 2 0
// 2 0 1