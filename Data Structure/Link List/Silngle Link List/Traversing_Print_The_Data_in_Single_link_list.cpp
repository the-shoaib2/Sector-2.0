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
    node1->data = 10;
    node2->data = 20;
    node3->data = 30;
    // Connect Nodes
    node1->next = node2;
    node2->next = node3;
    node3->next = NULL;

    // Traverse and print the data in the linked list
    struct Node *current = node1;
    while (current != NULL) {
        printf("Data: %d \n", current->data);
        current = current->next;
    }
    // printf("NULL\n");

    // Free the memory used by the nodes
    current = node1;
    while (current != NULL) {
        struct Node *temp = current;
        current = current->next; 
        free(temp);
    }

    return 0;
}
