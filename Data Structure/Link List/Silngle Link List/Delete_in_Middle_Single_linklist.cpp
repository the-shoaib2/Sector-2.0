#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

// Function to insert a node with given data after a specific node
void insertAfter(struct Node* prevNode, int newData) {
    if (prevNode == NULL) {
        printf("Previous node cannot be NULL\n");
        return;
    }

    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed\n");
        return;
    }

    newNode->data = newData;
    newNode->next = prevNode->next;
    prevNode->next = newNode;
}

int main() {
    // Initialize Nodes
    struct Node* start, * nodel;
    // Allocate memory & Initialize Nodes
    struct Node* node1 = (struct Node*)malloc(sizeof(struct Node));
    struct Node* node2 = (struct Node*)malloc(sizeof(struct Node));
    struct Node* node3 = (struct Node*)malloc(sizeof(struct Node));
    // Assign node data
    node1->data = 1;
    node2->data = 2;
    node3->data = 3;
    // Connect Nodes
    node1->next = node2;
    node2->next = node3;
    node3->next = NULL;

    // Step 2: Find the node before the k where you want to insert the new node (let's assume k=2)
    int k = 2;
    struct Node* temp = node1;

    for (int i = 1; i < k; i++) {
        if (temp->next != NULL) {
            temp = temp->next;
        }
    }

    // Call the insertAfter function to insert a node with data 10 after the k-th node
    insertAfter(temp, 10);

    // Print the updated linked list
    struct Node* current = node1;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }

    // Free memory
    current = node1;
    while (current != NULL) {
        struct Node* temp = current;
        current = current->next;
        free(temp);
    }

    return 0;
}
