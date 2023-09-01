#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
// Creating Node
typedef struct node
{
    int data;
    struct node *next;

} node;

int main()
{
    node *start, *p;
    int n;
    node *arr[20];
    printf("Enter Number Of Nodes :");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        arr[i] = (node *)malloc(sizeof(node));
        scanf("%d", &arr[i]->data);
    }

    for (int i = 0; i < n; i++)
    {
        arr[i]->next = arr[i + 1];
    }

    start = arr[0];
    p = start;

    while (p != NULL)
    {
        printf("%d", p->data);
        p = p->next;
    }

    return 0;
}
