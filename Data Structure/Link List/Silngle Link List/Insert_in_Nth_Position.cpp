#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node in the linked list
struct Node {
    int data;
    struct Node* next;
};

// Declare the head pointer globally and initialize it to NULL
struct Node* head = NULL;

// Function to insert a new node at the nth position in the linked list
struct Node* insertNth(int k, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;

    if (k == 1) {
        newNode->next = head;
        head = newNode;
        return head;
    }

    struct Node* current = head;
    for (int i = 0; i < k - 2 && current != NULL; i++) {
        current = current->next;
    }

    if (current != NULL) {
        newNode->next = current->next;
        current->next = newNode;
    }

    return head;
}

// Function to delete a node at the nth position in the linked list
struct Node* deleteNth(int k) {
    if (k == 1) {
        struct Node* temp = head;
        head = head->next;
        free(temp);
        return head;
    }

    struct Node* current = head;
    for (int i = 0; i < k - 2 && current != NULL; i++) {
        current = current->next;
    }

    if (current != NULL && current->next != NULL) {
        struct Node* temp = current->next;
        current->next = temp->next;
        free(temp);
    }

    return head;
}

// Function to print the linked list
void printList() {
    struct Node* current = head;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

int main() {
    int k, data;
    char operation;

    do {
        printf("Choose operation (I for Insert, D for Delete, Q for Quit): ");
        scanf(" %c", &operation);

        if (operation == 'I' || operation == 'i') {
            printf("Enter the position (k) to insert: ");
            scanf("%d", &k);

            printf("Enter the data to insert: ");
            scanf("%d", &data);

            head = insertNth(k, data);

            printf("Updated linked list: ");
            printList();
        } else if (operation == 'D' || operation == 'd') {
            printf("Enter the position (k) to delete: ");
            scanf("%d", &k);

            head = deleteNth(k);

            printf("Updated linked list: ");
            printList();
        }

    } while (operation != 'Q' && operation != 'q');

    // Free memory before exiting
    while (head != NULL) {
        struct Node* temp = head;
        head = head->next;
        free(temp);
    }

    return 0;
}
