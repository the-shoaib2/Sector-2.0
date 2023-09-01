#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *prev;
    struct Node *next;
};

int main() {
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
    node1->prev = NULL;
    node1->next = node2;
    node2->prev = node1;
    node2->next = node3;
    node3->prev = node2;
    node3->next = NULL;

    // Create a new node
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = 10;
    // Insert the new node at the end
    newNode->next = NULL;  // Set the next pointer of the new node to NULL
    newNode->prev = node3;  // Set the prev pointer of the new node to the last node

    // Update the previous last node's next pointer
    node3->next = newNode;

    // Print the updated linked list
    struct Node *current = node1;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }

    return 0;
}
