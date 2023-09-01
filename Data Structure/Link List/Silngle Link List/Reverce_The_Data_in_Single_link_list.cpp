//itaration------------------------------------------
// #include <stdio.h>
// #include <stdlib.h>

// struct Node {
//     int data;
//     struct Node *next;
// };

// struct Node* reverseLinkedList(struct Node* head) {
//     struct Node *prev = NULL;
//     struct Node *current = head;
//     struct Node *next = NULL;
    
//     while (current != NULL) {
//         next = current->next;
//         current->next = prev;
//         prev = current;
//         current = next;
//     }
    
//     return prev;
// }

// int main() {
//     // Initialize Nodes
//     struct Node *start;
//     // Allocate memory & Initialize Nodes
//     struct Node *node1 = (struct Node *)malloc(sizeof(struct Node));
//     struct Node *node2 = (struct Node *)malloc(sizeof(struct Node));
//     struct Node *node3 = (struct Node *)malloc(sizeof(struct Node));
//     // Assign node data
//     node1->data = 10;
//     node2->data = 20;
//     node3->data = 30;
//     // Connect Nodes
//     node1->next = node2;
//     node2->next = node3;
//     node3->next = NULL;

//     // Print the original linked list
//     printf("Original Linked List:\n");
//     struct Node *current = node1;
//     while (current != NULL) {
//         printf("Data: %d \n", current->data);
//         current = current->next;
//     }

//     // Reverse the linked list
//     struct Node *reversedHead = reverseLinkedList(node1);

//     // Print the reversed linked list
//     printf("\nReversed Linked List:\n");
//     current = reversedHead;
//     while (current != NULL) {
//         printf("Data: %d \n", current->data);
//         current = current->next;
//     }


//     return 0;
// }



//recursive ----------------------------------------------
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node* reverseLinkedList(struct Node* current, struct Node* prev) {
    if (current == NULL) {
        return prev;
    }
    struct Node *next = current->next;
    current->next = prev;
    return reverseLinkedList(next, current);
}

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

    struct Node *current = node1;

    // Reverse the linked list using recursion
    struct Node *reversedHead = reverseLinkedList(node1, NULL);

    // Print the reversed linked list
    printf("\nReversed Linked List:\n");
    current = reversedHead;
    while (current != NULL) {
        printf("Data: %d \n", current->data);
        current = current->next;
    }

    return 0;
}
