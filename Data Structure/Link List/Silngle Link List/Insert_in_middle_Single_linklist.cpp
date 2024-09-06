#include <iostream>

using namespace std;

typedef struct Node
{
    int data;
    Node* next;
}Node;

// Function to create a new node
Node* createNode(int data)
{
    Node* newNode = new Node;
    newNode->data = data;
    newNode->next = nullptr;
    return newNode;
}

// Function to insert a node after a given node
void insertAfter(Node* Start, int data)
{
    if (Start == nullptr)
    {
        cout << "Previous node cannot be null." << endl;
        return;
    }
    Node* newNode = createNode(data);
    newNode->next = Start->next;
    Start->next = newNode;
}

66


// Function to print the linked list
void printList(Node* head)
{
    Node* current = head;
    while (current != nullptr)
    {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

int main()
{
    // Initialize Nodes
    Node* start = nullptr;

    // Allocate memory & Initialize Nodes
    Node* node1 = createNode(1);
    Node* node2 = createNode(2);
    Node* node3 = createNode(3);

    // Connect Nodes
    node1->next = node2;
    node2->next = node3;
    node3->next = nullptr;

    // Insert a node after the second node (k=2)
    insertAfter(node2, 10);

    // Print the updated linked list
    printList(node1);



    return 0;
}


// #include <stdio.h>
// #include <stdlib.h>

// typedef struct Node
// {
//     int data;
//     struct Node *next;
// }Node;

// int main()
// {
//     // Initialize Nodes
//      Node *start;
//     // Allocate memory & Initialize Nodes
//      Node *node1 = ( Node *)malloc(sizeof( Node));
//      Node *node2 = ( Node *)malloc(sizeof( Node));
//      Node *node3 = ( Node *)malloc(sizeof( Node));
//     // Assign node data
//     node1->data = 1;
//     node2->data = 2;
//     node3->data = 3;
//     // Connect Nodes
//     node1->next = node2;
//     node2->next = node3;
//     node3->next = NULL;

//     // Step 2: Find the node before the k where you want to insert the new node (let's assume k=2)
//     int k = 2;
//      Node *temp = node1;

//     for (int i = 1; i < k; i++)
//     {
//         if (temp->next != NULL)
//         {
//             temp = temp->next;
//         }
//     }

//     // Step 3: Create a new node with the data to be inserted
//      Node *newNode = ( Node *)malloc(sizeof( Node));
//     newNode->data = 10;

//     // Step 4: Update the "next" pointers to include the new node in the middle
//     newNode->next = temp->next;
//     temp->next = newNode;

//     // Print the updated linked list
//      Node *current = node1;
//     while (current != NULL)
//     {
//         printf("%d ", current->data);
//         current = current->next;
//     }

//     return 0;
// }
