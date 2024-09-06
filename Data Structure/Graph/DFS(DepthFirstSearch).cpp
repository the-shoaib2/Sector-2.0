#include <bits/stdc++.h>

using namespace std;

class Graph {
  int numVertices;
  list<int> *adjLists;
  bool *visited;

public:
  // Constructor to initialize the graph
  Graph(int V) {
    numVertices = V;
    adjLists = new list<int>[V];
    visited = new bool[V];
  }

  // Function to add an edge to the graph
  void addEdge(int src, int dest) {
    adjLists[src].push_front(dest); // Add destination to the adjacency list of source
  }

  // Depth-First Search algorithm
  void DFS(int vertex) {
    visited[vertex] = true; // Mark the current vertex as visited
    list<int> adjList = adjLists[vertex]; // Get the adjacency list of the current vertex

    cout << vertex << " "; // Print the current vertex

    // Iterate through the adjacency list
    list<int>::iterator i;
    for (i = adjList.begin(); i != adjList.end(); ++i) {
      if (!visited[*i]) {
        DFS(*i); // Recursively call DFS for unvisited adjacent vertices
      }
    }
  }
};

int main() {
  // Create a graph with 4 vertices
  Graph g(4);
  
  // Add edges to the graph
  g.addEdge(0, 1);
  g.addEdge(0, 2);
  g.addEdge(1, 2);
  g.addEdge(2, 3);

  // Perform Depth-First Search starting from vertex 2
  g.DFS(2);

  return 0;
}
