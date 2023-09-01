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

    // Traversing the doubly linked list and printing data
    struct Node *current = node1;
    int count=0;
    while (current != NULL) {
        printf("Data: %d ", current->data);
        count++;
        current = current->next;
    }
        printf("\n");
        printf("Traversing Count: %d\n", count);



    return 0;
}
