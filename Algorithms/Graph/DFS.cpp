#include <stdio.h>
#define MAX 100

int visited[MAX];

void DFS(int arr[MAX][MAX], int n, int s)
{
    printf("%d ", s);
    visited[s] = 1;

    for (int i = 0; i < n; i++)
    {
        if (arr[s][i] = 1 && !visited[i])
        {
            DFS(arr, n, i);
        }
    }
}

int main(int argc, char const *argv[])
{

    int n;
    printf("Enter Verticis : ");
    scanf("%d", &n);

    int arr[MAX][MAX];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }

        int s;
        printf("Enter starting vertices (0 - %d): ", n - 1);
        scanf("%d", &s);

        for (int i = 0; i < n; i++)
        {
            visited[i] = 0;
        }

        printf("DFS Traversal : ");
        DFS(arr, n, s);
        printf("\n");

        return 0;
    }
}
/*

Input:

Enter Verticis : 5
0 1 1 0 0
1 0 0 1 0
1 0 0 1 1
0 1 1 0 0
0 0 1 0 0
Enter starting vertices (0 - 4): 0


Output :
DFS Traversal : 0 1 2 3 4

*/