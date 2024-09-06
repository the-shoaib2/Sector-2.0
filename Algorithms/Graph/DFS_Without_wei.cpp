#include <bits/stdc++.h>
using namespace std;

// First line of the output contains sizeof the path. 
// Second line of the output contains size nodes of the path. 
// If there is multiple path from D then just print “-1” (without quotes).

const int N = 1e5 + 10;
vector<vector<int>> G(N);
vector<int> visited(N, 0);
vector<int> pathNodes; // Store the nodes of the path

bool DFS(int vertex, int destination)
{
    visited[vertex] = true;
    pathNodes.push_back(vertex); // Store the current vertex in the path

    if (vertex == destination)
        return true;

    for (int child : G[vertex])
    {
        if (!visited[child])
        {
            if (DFS(child, destination))
                return true;
        }
    }
    pathNodes.pop_back(); // Remove the current vertex from the path if it's not part of the path
    return false;
}

int main()
{
    int n, S, D, M;
    cin >> n >> S >> D;

    cin >> M;

    for (int i = 0; i < M; ++i)
    {
        int u, v;
        cin >> u >> v;
        G[u].push_back(v);
        // For undirected graph, uncomment the next line
        // G[v].push_back(u);
    }

    if (DFS(S, D))
    {
        cout << pathNodes.size() << endl; // Print the size of the path
        for (int node : pathNodes)
            cout << node << " "; // Print the nodes of the path
        cout << endl;
    }
    else
        cout << "-1\n";

    return 0;
}

/*
Input:
3 1 3
6
1 2
1 3
2 1
2 3
3 1
3 2
Output:
3
1 2 3

*/
