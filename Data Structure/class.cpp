#include <stdio.h>
#include <stdlib.h>

// Define a structure for the singly linked list node
typedef struct Node {
    int data;
    struct Node* next;
};


void insertNth( Node* head, int k, int data) {
    Node* newNode = ( Node*)malloc(sizeof( Node));
    newNode->data = data;
    newNode->next = NULL;
    if (k == 1) {
        newNode->next = head;
        head = newNode;
        return;
    }
    Node* current = *head;
    for (int i = 1; i < k - 1; i++) {
        current = current->next;
    }
    if (current != NULL) {
        newNode->next = current->next;
        current->next = newNode;
    }
}

// Function to display the linked list
void displayList( Node* head) {
    printf("Linked List: ");
     Node* current = head;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

int main() {
     Node* head = NULL;

    // Insert at the kth position
    insertNth(head, 1, 10); // Insert at the beginning
    insertNth(head, 2, 20); // Insert at the 2nd position
    insertNth(head, 3, 189); // Insert at the 2nd position again
    insertNth(head, 4, 150); // Insert at the 2nd position again

    // Display the linked list
    displayList(head);

    return 0;
}
