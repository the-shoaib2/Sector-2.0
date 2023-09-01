#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};
int main()
{
    // Initialize Nodes
    struct Node *start;
    // Allocate memory & Initialize Nodes
    struct Node *node1 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *node2 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *node3 = (struct Node *)malloc(sizeof(struct Node));
    // Assign data to nodes
    node1->data = 1;
    node2->data = 2;
    node3->data = 3;
    // Connect Nodes
    node1->next = node2;
    node2->next = node3;
    node3->next = NULL;

    // Traverse to the second-to-last node
    struct Node *temp = node1;
    while (temp->next != NULL && temp->next->next != NULL)
    {
        temp = temp->next;
    }

    // Update the "next" pointer of the second-to-last node to NULL
    temp->next = NULL;

    // Free the memory of the last node
    free(node3);

    // Print the updated linked list
    struct Node *current = node1;
    while (current != NULL)
    {
        printf("%d ", current->data);
        current = current->next;
    }

    return 0;
}
