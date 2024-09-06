#include <bits/stdc++.h>

using namespace std;

typedef struct Node
{
    int Age;
    string Name;
    struct Node *Next;
} Node;

Node *CreateNode(int Age, string Name)
{
    Node *NewNode = new Node;
    NewNode->Age = Age;
    NewNode->Name = Name;
    NewNode->Next = nullptr;
    return NewNode;
}

Node *InsertAtBegeinning(Node *Start, int Age, string Name)
{
    Node *newNode = CreateNode(Age, Name);
    newNode->Next = Start;
    return newNode;
}

void Print(Node *Start)
{
    Node * Current = Start;
    while (Current != nullptr)
    {
          cout << "Age: " << Current->Age << endl<< "Name: " << Current->Name << endl;
          Current = Current-> Next;
    }
}

int main()
{
    Node *Start = nullptr;
    int Age;
    string Name;
    cin >> Age;
    cin >> Name;
   Start = InsertAtBegeinning(Start,Age,Name);
   Print(Start);

    return 0;
}






// #include <bits/stdc++.h>

// using namespace std;

// struct Node {
//     int data;
//     Node* next;
// };

// int main() {
//     // Initialize Nodes
//     Node *start = nullptr;
//     Node *node1 = new Node;
//     Node *node2 = new Node;
//     Node *node3 = new Node;

//     // Assign node data
//     node1->data = 1;
//     node2->data = 2;
//     node3->data = 3;

//     // Connect Nodes
//     node1->next = node2;
//     node2->next = node3;
//     node3->next = nullptr;

//     // Create a new node
//     Node *newNode = new Node;
//     newNode->data = 10;

//     // Insert the new node at the beginning
//     newNode->next = node1;
//     node1 = newNode;

//     // Print the updated linked list
//     Node *current = node1;
//     while (current != nullptr) {
//         cout << current->data << " ";
//         current = current->next;
//     }

//     // Clean up the allocated memory
//     while (node1 != nullptr) {
//         Node *temp = node1;
//         node1 = node1->next;
//         delete temp;
//     }

//     return 0;
// }









// #include <stdio.h>
// #include <stdlib.h>

// struct Node {
//     int data;
//     struct Node *next;
// };

// int main() {
//     // Initialize Nodes
//     struct Node *start, *nodel;
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

//     // Create a new node
//     struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
//     newNode->data = 10;
//     // Insert the new node at the beginning
//     newNode->next = node1;
//     node1 = newNode;

//     // Print the updated linked list
//     struct Node *current = node1;
//     while (current != NULL) {
//         printf("%d ", current->data);
//         current = current->next;
//     }

//     return 0;
// }
