#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

int main()
{    // Initialize Nodes
    struct node *start, *nodel;
    // Allocatrew memory & Initialize Nodes
    struct Node *node1 = (struct Node *)malloc(sizeof(struct Node));;
    struct Node *node2 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *node3 = (struct Node *)malloc(sizeof(struct Node));
    // Assing node
    node1->data = 1;
    node2->data = 2;
    node3->data = 3;
    // Connect Node
    node1->next = node2;
    node2->next = node3;
    node3->next = NULL;

    // Step 2: Find the node before the one to be deleted (let's assume position=2)
    int position = 2;
    struct Node *temp = node1;

    for (int i = 2; i < position; i++)
    {
        if (temp->next != NULL)
        {
            temp = temp->next;
        }
    }

    // Step 3: Update the "next" pointer of the previous node to skip the node to be deleted
    temp->next = temp->next->next;

    // Step 4: Free the memory of the node to be deleted
    free(node2);

    // Print the updated linked list
    struct Node *current = node1;
    while (current != NULL)
    {
        printf("%d ", current->data);
        current = current->next;
    }

    return 0;
}
