// Create a structure for the linked list node.

// Initialize a pointer to the head of the linked list.

// Handle special cases:

// If the linked list is empty (head is NULL), there is nothing to delete.

// If there is only one node, delete it and set the head to NULL.

// Otherwise, for a non-empty list, update the head to the next node and free the memory of the old head.

#include <stdio.h>
#include <stdlib.h>

// Structure for linked list node
struct Node
{
    int data;
    struct Node *next;
};

int main()
{
    struct Node *head = NULL; // Head of the linked list

    // Check if the linked list is empty
    if (head == NULL)
    {
        printf("Linked list is empty. Nothing to delete.\n");
    }
    else
    {
        // Store the reference to the first node
        struct Node *temp = head;

        // Move the head to the next node
        head = head->next;

        // Free the memory of the first node
        free(temp);

        printf("Deleted node from the beginning of the linked list.\n");
    }

    return 0;
}
