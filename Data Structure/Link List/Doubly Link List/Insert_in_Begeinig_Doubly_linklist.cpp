#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *prev;
    struct Node *next;
};

int main() {
    // Initialize Nodes
    struct Node *start = NULL;

    // Allocate memory & Initialize Nodes
    struct Node *node1 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *node2 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *node3 = (struct Node *)malloc(sizeof(struct Node));

    // Assign node data
    node1->data = 1;
    node2->data = 2;
    node3->data = 3;

    // Connect Nodes to create a circular doubly linked list
    node1->prev = node3;
    node1->next = node2;

    node2->prev = node1;
    node2->next = node3;

    node3->prev = node2;
    node3->next = node1;

    // Insert a new node at the beginning
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = 0;

    if (start == NULL) {
        start = newNode;
        start->prev = start;
        start->next = start;
    } else {
        newNode->prev = start->prev;
        newNode->next = start;
        start->prev->next = newNode;
        start->prev = newNode;
        start = newNode;
    }

    // Printing the circular doubly linked list
    struct Node *current = start;
    do {
        printf("%d ", current->data);
        current = current->next;
    } while (current != start);
    
    return 0;
}
