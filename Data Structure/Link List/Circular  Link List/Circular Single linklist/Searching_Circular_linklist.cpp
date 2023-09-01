#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

int main() {
    // Initialize Nodes
    struct Node *start = NULL;  // Initialize to NULL
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

    // Searching in the circular singly linked list
    int searchValue = 2;
    struct Node *current = start;
    if (current != NULL) {
        do {
            if (current->data == searchValue) {
                printf("Element %d found in the list.\n", searchValue);
                break;
            }
            current = current->next;
        } while (current != start);
        
        if (current == start) {
            printf("Element %d not found in the list.\n", searchValue);
        }
    } else {
        printf("List is empty.\n");
    }

    return 0;
}
