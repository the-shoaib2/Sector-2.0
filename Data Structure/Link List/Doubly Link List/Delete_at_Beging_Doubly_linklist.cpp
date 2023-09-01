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

    // Deletion at the beginning
    if (start != NULL) {
        struct Node *temp = start;
        while (temp->next != start) {
            temp = temp->next;
        }
        temp->next = start->next;
        free(start);
        start = temp->next;  // Update start
    }

    return 0;
}
