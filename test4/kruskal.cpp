// Kruskal's
/*

1. edge sort
2. unio-find set create
3. cycle na hole edge add
4. v-1 hole stop kore felbo ..

time complexity : O(E log E)

*/

#include <stdio.h>

struct Edge
{
    int u, v, w;
};

// Bubble Sort Asending order
void sort(struct Edge edges[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (edges[j].w > edges[j + 1].w)
            {
                struct Edge temp = edges[j];
                edges[j] = edges[j + 1];
                edges[j + 1] = temp;
            }
        }
    }
}

int findParent(int arr[], int node)
{
    while (arr[node] != node)
    {
        node = arr[node];
    }
    return node;
}

void unionSet(int arr[], int a, int b)
{
    int pa = findParent(arr, a);
    int pb = findParent(arr, b);

    if (pa != pb)
    {
        arr[pb] = pa;
    }
}

int main()
{

    int V, E;

    scanf("%d %d", &V, &E);

    struct Edge edges[E];

    for (int i = 0; i < E; i++)
    {
        scanf("%d %d %d", &edges[i].u, &edges[i].v, &edges[i].w);
    }

    int parent[V];
    for (int i = 0; i < V; i++)
    {
        parent[i] = i;
    }

    sort(edges, E);

    int a, b;
    a = b = 0;

    for (int i = 0; i < E && b < V - 1; i++)
    {
        int u = edges[i].u;
        int v = edges[i].v;
        int w = edges[i].w;

        int pU = findParent(parent, u);
        int pV = findParent(parent, v);

        if (pU != pV)
        {
            printf("Edge ( %d --- %d ) , Weight : %d\n", u, v, w);
            a += w;  // MST_WEIGHT a
            b++;
            unionSet(parent, pU, pV);
        }
        else
        {
            printf("Sippp edges!!!");
        }
    }

    printf("MST = %d", a);

    return 0;
}

/*

4 5
0 1 1
0 2 3
1 2 2
1 3 4
2 3 5


*/