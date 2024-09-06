#include <iostream>

using namespace std;

typedef struct Node
{
    int Data;
    struct Node *Next;
} Node;

Node *CreateNode(int Data)
{
    Node *NewNode = new Node;
    NewNode->Data = Data;
    NewNode->Next = nullptr;
    return NewNode;
}

Node *InsertAtEnd(Node *Start, int Data)
{
    Node *newNode = CreateNode(Data);

    if (Start == nullptr)
    {
        // If the list is empty, make the new node the head
        Start = newNode;
    }
    else
    {
        Node *current = Start;
        while (current->Next != nullptr)
        {
            current = current->Next;
        }
        current->Next = newNode;
    }

    return Start;
}

void Print(Node *Start)
{
    Node *Current = Start;
    while (Current != nullptr)
    {
        cout << "Data: " << Current->Data << endl;
        Current = Current->Next;
    }
}

// Function to delete the entire linked list to free memory
void DeleteLinkedList(Node *Start)
{
    while (Start != nullptr)
    {
        Node *temp = Start;
        Start = Start->Next;
        delete temp;
    }
}

int main()
{
    Node *Start = nullptr;
    int Data;

    // Insert nodes at the end
    cin >> Data;
    Start = InsertAtEnd(Start, Data);

    cin >> Data;
    Start = InsertAtEnd(Start, Data);

    // Print the linked list
    Print(Start);

    // Delete the linked list to free memory
    DeleteLinkedList(Start);

    return 0;
}




// #include <stdio.h>
// #include <stdlib.h>

// struct Node
// {
//     int data;
//     struct Node *next;
// };

// int main()
// {
//     // Initialize Nodes
//     struct Node *start, ;
//     // Allocate memory & Initialize Nodes
//     struct Node *node1 = (struct Node *)malloc(sizeof(struct Node));
//     struct Node *node2 = (struct Node *)malloc(sizeof(struct Node));
//     struct Node *node3 = (struct Node *)malloc(sizeof(struct Node));
//     // Assign node data
//     node1->data = 1;
//     node2->data = 2;
//     node3->data = 3;
//     // Connect Nodes
//     node1->next = node2;
//     node2->next = node3;
//     node3->next = NULL;

//     // Step 1: Find the last node in the linked list
//     struct Node *temp = node1;

//     while (temp->next != NULL)
//     {
//         temp = temp->next;
//     }

//     // Step 2: Create a new node with the data to be inserted
//     struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
//     newNode->data = 10;
//     newNode->next = NULL;

//     // Step 3: Update the "next" pointer of the last node to point to the new node
//     temp->next = newNode;

//     // Print the updated linked list
//     struct Node *current = node1;
//     while (current != NULL)
//     {
//         printf("%d ", current->data);
//         current = current->next;
//     }

//     return 0;
// }
