#include <iostream>
using namespace std;

// Define a structure for a linked list node
typedef struct Node
{
    int data;
    struct Node *next;
} Node;

int main()
{
    Node *start;

    // Allocate memory for the first node and initialize it with data 1
    Node *Node1 = (Node *)malloc(sizeof(Node));
    Node1->data = 1;

    // Allocate memory for the second node and initialize it with data 0
    Node *Node2 = (Node *)malloc(sizeof(Node));
    Node2->data = 0;

    // Allocate memory for the third node and initialize it with data 1
    Node *Node3 = (Node *)malloc(sizeof(Node));
    Node3->data = 1;

    // Allocate memory for the fourth node and initialize it with data 0
    Node *Node4 = (Node *)malloc(sizeof(Node));
    Node4->data = 0;

    // Connect the nodes to form a linked list
    Node1->next = Node2;
    Node2->next = Node3;
    Node3->next = Node4;
    Node4->next = NULL;

    // Initialize a current pointer to the first node
    Node *current = Node1;

    for (int i = 0; i < 4; i++)
    {
        // Create pointers for the current node and its previous node
        Node *current = Node1;
        Node *prev = NULL;

        // Traverse the list to find the last node and its previous node
        while (current->next != NULL)
        {
            prev = current;
            current = current->next;
        }

        // Free the memory of the last node
        free(current);

        // Set the next pointer of the previous node to NULL
        prev->next = NULL;

        // Allocate memory for a new node with data 0
        Node *Node5 = (Node *)malloc(sizeof(Node));
        Node5->data = 0;

        // Make the new node the new head of the list by pointing it to the previous head
        Node5->next = Node1;
        Node1 = Node5;

        // Print the data of each node in the linked list
        while (current != NULL)
        {
            cout << current->data << " ";
            current = current->next;
        }

        cout << endl;
    }

    return 0;
}
