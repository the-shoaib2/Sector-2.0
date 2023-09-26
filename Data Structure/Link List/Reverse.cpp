#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

int main()
{
    // Create the node
    struct Node* node1 = (struct Node*)malloc(sizeof(struct Node));
    struct Node* node2 = (struct Node*)malloc(sizeof(struct Node));
    struct Node* node3 = (struct Node*)malloc(sizeof(struct Node));

    node1->data = 4;
    node2->data = 5;
    node3->data = 6;


    // Connect the nodes to form the linked list
    node1->next = node2;
    node2->next = node3;
    node3->next = NULL;

    // Print the linked list in reverse
    struct Node* current = node1;
    struct Node* prev = NULL;
    struct Node* next;
    
    while (current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    
    node1 = prev;

    // Print the reversed linked list
    current = node1;
    while (current != NULL)
    {
        printf("%d", current->data);
        current = current->next;
    }


    return 0;
}
