#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *prev;
    struct Node *next;
};

struct Node* searchNode(struct Node* head, int target) {
    struct Node *current = head;
    while (current != NULL) {
        if (current->data == target) {
            return current;
        }
        current = current->next;
    }
    return NULL; // Target not found
}

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

    // Search for a node with data 2
    struct Node *foundNode = searchNode(node1, 2);
    if (foundNode != NULL) {
        printf("Node with data 2 found.\n");
    } else {
        printf("Node with data 2 not found.\n");
    }

    // Search for a node with data 5
    foundNode = searchNode(node1, 5);
    if (foundNode != NULL) {
        printf("Node with data 5 found.\n");
    } else {
        printf("Node with data 5 not found.\n");
    }

    return 0;
}
