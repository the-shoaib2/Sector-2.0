#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

int main() {
    // Initialize Nodes
    struct Node *start;
    // Allocate memory & Initialize Nodes
    struct Node *node1 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *node2 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *node3 = (struct Node *)malloc(sizeof(struct Node));
    // Assign node data
    node1->data = 1;
    node2->data = 2;
    node3->data = 3;
    // Connect Nodes to create a circular singly linked list
    node1->next = node2;
    node2->next = node3;
    node3->next = node1;  // Circular connection
    
    struct Node *current = node1;
    while (current->next->next != node1) {
        current = current->next;
    }

    // Delete the last node
    free(current->next);
    current->next = node1; // Update circular connection

    // Traverse and print the updated circular singly linked list
    current = node1;  // Start from the new head (node1)
    do {
        printf("%d ", current->data);
        current = current->next;
    } while (current != node1);  // Traverse until we come back to the new starting node

    return 0;
}
