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

    // Create a new node
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = 10;
    newNode->next = node1; 
    node1 = newNode;  

    // Traverse and print the updated circular singly linked list
    struct Node *current = node1;
    do {
        printf("%d ", current->data);
        current = current->next;
    } while (current != node1);  // Traverse until we come back to the starting node

    return 0;
}
