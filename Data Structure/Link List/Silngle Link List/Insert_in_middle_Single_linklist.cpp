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

    // Step 2: Find the node before the k where you want to insert the new node (let's assume k=2)
    int k = 2;
    struct Node *temp = node1;

    for (int i = 1; i < k; i++)
    {
        if (temp->next != NULL)
        {
            temp = temp->next;
        }
    }

    // Step 3: Create a new node with the data to be inserted
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = 10;

    // Step 4: Update the "next" pointers to include the new node in the middle
    newNode->next = temp->next;
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
