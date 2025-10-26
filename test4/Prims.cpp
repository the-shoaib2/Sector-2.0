#include <stdio.h>
#include <limits.h> 


/*
1. vertex 0 theke suru korbo 
2. sobthke choto edge ber korbo 
3. vertex mst te add korbo 
4. paser vertex update


*/

#define MAX 100


// MINMUM WEIGHT
int minKey(int key[], int mstSet[], int n) {
    int min = INT_MAX, minIndex;

    for (int i = 0; i < n; i++) {
        if (mstSet[i] == 0 && key[i] < min) {
            min = key[i];
            minIndex = i;
        }
    }
    return minIndex;
}

void printMST(int parent[], int arr[MAX][MAX], int V) {
    int count = 0;
    for (int i = 1; i < V; i++) {
        printf("Edge (%d - %d) Weight %d\n", parent[i],     i,     arr[i][parent[i]]     );
        count += arr[i][parent[i]];
    }
    printf("\nTotal MST Weight = %d\n", count);
}

int main() {
    int V;
    scanf("%d", &V);

    int arr[MAX][MAX];
    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    int parent[V];
    int key[V];   
    int mstSet[V]; 

    for (int i = 0; i < V; i++) {
        key[i] = INT_MAX;
        mstSet[i] = 0;
    }

    key[0] = 0;
    parent[0] = -1; 

    for (int i = 0; i < V - 1; i++) {

        int u = minKey(key, mstSet, V);
        mstSet[u] = 1; 

        for (int v = 0; v < V; v++) {
            if (arr[u][v] && mstSet[v] == 0 && arr[u][v] < key[v]) {
                parent[v] = u;
                key[v] = arr[u][v];
            }
        }
    }

    printMST(parent, arr, V);

    return 0;
}

/*
5
0 2 0 6 0
2 0 3 8 5
0 3 0 0 7
6 8 0 0 9
0 5 7 9 05
Edge (0 - 1) Weight 2
Edge (1 - 2) Weight 3
Edge (0 - 3) Weight 6
Edge (1 - 4) Weight 5

Total MST Weight = 16

*/