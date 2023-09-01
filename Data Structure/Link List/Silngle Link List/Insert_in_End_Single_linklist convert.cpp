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
    struct Node *start, *nodel;
    // Allocate memory & Initialize Nodes
    struct Node *node1 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *node2 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *node3 = (struct Node *)malloc(sizeof(struct Node));
    // Assign node data
    node1->data = 1;
    node2->data = 2;
    node3->data = 3;
    // Connect Nodes
    node1->next = node2;
    node2->next = node3;
    node3->next = NULL;

    // Step 1: Find the last node in the linked list
    struct Node *temp = node1;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    // Step 2: Create a new node with the data to be inserted
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = 10;
    newNode->next = NULL;

    // Step 3: Update the "next" pointer of the last node to point to the new node
    temp->next = newNode;

    // Print the updated linked list
    struct Node *current = node1;
    while (current != NULL)
    {
        printf("%d ", current->data);
        current = current->next;
    }

    return 0;
}
