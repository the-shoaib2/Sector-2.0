#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *prev;
    struct Node *next;
};

int main() {
    // Create nodes
    struct Node *node1 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *node2 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *node3 = (struct Node *)malloc(sizeof(struct Node));

    // Assign node data
    node1->data = 1;
    node2->data = 2;
    node3->data = 3;

    // Connect nodes to form a circular doubly linked list
    node1->prev = node3;
    node1->next = node2;

    node2->prev = node1;
    node2->next = node3;

    node3->prev = node2;
    node3->next = node1;

    // Print the circular doubly linked list
    struct Node *current = node1;
    do {
        printf("%d ", current->data);
        current = current->next;
    } while (current != node1);



    return 0;
}
