// #include <stdio.h>
// #include <limits.h> 


// /*
// 1. vertex 0 theke suru korbo 
// 2. sobthke choto edge ber korbo 
// 3. vertex mst te add korbo 
// 4. paser vertex update


// */

// #define MAX 100


// // MINMUM WEIGHT
// int minKey(int key[], int mstSet[], int n) {
//     int min = INT_MAX, minIndex;

//     for (int i = 0; i < n; i++) {
//         if (mstSet[i] == 0 && key[i] < min) {
//             min = key[i];
//             minIndex = i;
//         }
//     }
//     return minIndex;
// }

// void printMST(int parent[], int arr[MAX][MAX], int V) {
//     int count = 0;
//     for (int i = 1; i < V; i++) {
//         printf("Edge (%d - %d) Weight %d\n", parent[i],     i,     arr[i][parent[i]]     );
//         count += arr[i][parent[i]];
//     }
//     printf("\nTotal MST Weight = %d\n", count);
// }

// int main() {
//     int V;
//     scanf("%d", &V);

//     int arr[MAX][MAX];
//     for (int i = 0; i < V; i++) {
//         for (int j = 0; j < V; j++) {
//             scanf("%d", &arr[i][j]);
//         }
//     }

//     int parent[V];
//     int key[V];   
//     int mstSet[V]; 

//     for (int i = 0; i < V; i++) {
//         key[i] = INT_MAX;
//         mstSet[i] = 0;
//     }

//     key[0] = 0;
//     parent[0] = -1; 

//     for (int i = 0; i < V - 1; i++) {

//         int u = minKey(key, mstSet, V);
//         mstSet[u] = 1; 

//         for (int v = 0; v < V; v++) {
//             if (arr[u][v] && mstSet[v] == 0 && arr[u][v] < key[v]) {
//                 parent[v] = u;
//                 key[v] = arr[u][v];
//             }
//         }
//     }

//     printMST(parent, arr, V);

//     return 0;
// }

// /*
// 5
// 0 2 0 6 0
// 2 0 3 8 5
// 0 3 0 0 7
// 6 8 0 0 9
// 0 5 7 9 05
// Edge (0 - 1) Weight 2
// Edge (1 - 2) Weight 3
// Edge (0 - 3) Weight 6
// Edge (1 - 4) Weight 5

// Total MST Weight = 16

// */




#include <stdio.h>
#include <limits.h>

#define MAX 100

// Function to find vertex with minimum key value not yet in MST
int minKey(int key[], int mstSet[], int n) {
    int min = INT_MAX, minIndex = -1;

    for (int i = 0; i < n; i++) {
        if (mstSet[i] == 0 && key[i] < min) {
            min = key[i];
            minIndex = i;
        }
    }
    return minIndex;
}

// Function to print the final MST and total weight
void printMST(int parent[], int graph[MAX][MAX], int V) {
    int totalWeight = 0;
    printf("\nFinal MST Edges:\n");
    for (int i = 1; i < V; i++) {
        printf("  %d - %d   Weight: %d\n", parent[i], i, graph[i][parent[i]]);
        totalWeight += graph[i][parent[i]];
    }
    printf("\nTotal MST Weight = %d\n", totalWeight);
}

// Function to perform Prim's algorithm with step-by-step simulation
void primMST(int graph[MAX][MAX], int V) {
    int parent[V];   // Stores MST tree structure
    int key[V];      // Stores minimum weight edge for each vertex
    int mstSet[V];   // Tracks included vertices in MST

    // Step 1: Initialize all keys as infinite and mstSet[] as false
    for (int i = 0; i < V; i++) {
        key[i] = INT_MAX;
        mstSet[i] = 0;
    }

    // Step 2: Start from vertex 0
    key[0] = 0;
    parent[0] = -1;

    printf("\n=== Prim's MST Step-by-Step Simulation ===\n");

    // Step 3: The MST will have V-1 edges
    for (int count = 0; count < V - 1; count++) {
        // Pick vertex u not yet included in MST with minimum key value
        int u = minKey(key, mstSet, V);
        mstSet[u] = 1;

        printf("\nIteration %d:\n", count + 1);
        printf("→ Picked vertex %d (key = %d)\n", u, key[u]);

        // Update key and parent index of adjacent vertices
        for (int v = 0; v < V; v++) {
            if (graph[u][v] && mstSet[v] == 0 && graph[u][v] < key[v]) {
                parent[v] = u;
                key[v] = graph[u][v];
                printf("   Updated vertex %d --> new key = %d, parent = %d\n", v, key[v], parent[v]);
            }
        }

        // Print current status of key[] and mstSet[]
        printf("Current key values: ");
        for (int k = 0; k < V; k++) {
            if (key[k] == INT_MAX) printf("INF ");
            else printf("%d ", key[k]);
        }
        printf("\nMST set status:    ");
        for (int k = 0; k < V; k++) printf("%d ", mstSet[k]);
        printf("\n");
    }

    // Step 4: Print the final MST
    printMST(parent, graph, V);

    printf("=== End of Simulation ===\n");
}

int main() {
    int V;
    int graph[MAX][MAX];

    printf("Enter number of vertices: ");
    scanf("%d", &V);

    printf("Enter the adjacency matrix (%d x %d):\n", V, V);
    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            scanf("%d", &graph[i][j]);
        }
    }

    // Run Prim's algorithm
    primMST(graph, V);

    return 0;
}

/*
📌 Example Input:
5
0 2 0 6 0
2 0 3 8 5
0 3 0 0 7
6 8 0 0 9
0 5 7 9 0

📌 Example Output
=== Prim's MST Step-by-Step Simulation ===
Iteration 1
→ Picked vertex 0 (key = 0)
   Updated vertex 1 → new key = 2, parent = 0
   Updated vertex 3 → new key = 6, parent = 0       
   Current key values: 0 2 INF 6 INF
MST set status:    1 0 0 0 0
Iteration 2
→ Picked vertex 1 (key = 2)
   Updated vertex 2 → new key = 3, parent = 1
   Updated
    
    
    
   */