#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
} Node;


int main()
{
    // Initialize Nodes
    Node *start;
    // Allocate memory & Initialize Nodes
    Node *node1 = (Node *)malloc(sizeof(Node));
    Node *node2 = (Node *)malloc(sizeof(Node));
    Node *node3 = (Node *)malloc(sizeof(Node));
    // Assign data to nodes
    node1->data = 1;
    node2->data = 2;
    node3->data = 3;
    // Connect Nodes
    node1->next = node2;
    node2->next = node3;
    node3->next = NULL;

    // Traverse to the second-to-last node
    Node *temp = node1;
    while (temp->next != NULL && temp->next->next != NULL)
    {
        temp = temp->next;
    }

    // Update the "next" pointer of the second-to-last node to NULL
    temp->next = NULL;

    // Free the memory of the last node
    free(node3);

    // Print the updated linked list
    Node *current = node1;
    while (current != NULL)
    {
        printf("%d ", current->data);
        current = current->next;
    }

    return 0;
}
