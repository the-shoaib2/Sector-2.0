// #include <iostream>
// using namespace std;

// typedef struct Node
// {
//     int data;
//     struct Node *next;
// } Node;

// int main()
// {
//     Node *start;

//     Node *Node1 = (Node *)malloc(sizeof(Node));
//     Node *Node2 = (Node *)malloc(sizeof(Node));
//     Node *Node3 = (Node *)malloc(sizeof(Node));
//     Node *Node4 = (Node *)malloc(sizeof(Node));


//     Node1->data = 1;
//     Node2->data = 0;
//     Node3->data = 1;
//     Node4->data = 0;

//     Node1->next = Node2;
//     Node2->next = Node3;
//     Node3->next = Node4;
//     Node4->next = NULL;

    // for (int i = 0; i < 4; i++)
    // {
    //     Node *temp = Node1;
    //     Node1 = Node1->next;
    //     free(temp);

    //     Node *current = Node1;
    //     while (current->next != NULL)
    //     {
    //         current = current->next;
    //     }

    //     Node *Node5 = (Node *)malloc(sizeof(Node));
    //     Node5->data = 0;

    //     current->next = Node5;
    //     Node5->next = NULL;
    // }

//     Node *current = Node1;
//     while (current != NULL)
//     {
//         cout << current->data << " ";
//         current = current->next;
//     }

//     return 0;
// }


#include <iostream>
using namespace std;

// Define a structure for a linked list node
typedef struct Node
{
    int data;
    struct Node *next;
} Node;

// Function to create a new node and return a pointer to it
Node* createNode(int data)
{
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to free the memory of a linked list
void freeLinkedList(Node* start)
{
    Node* current = start;
    while (current != NULL)
    {
        Node* temp = current;
        current = current->next;
        delete temp;
    }
}

// Function to print the linked list
void printLinkedList(Node* start)
{
    Node* current = start;
    while (current != NULL)
    {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

int main()
{
    Node *start = NULL;

    int n;
    cout << "Enter the number of nodes: ";
    cin >> n;

    int num[n];
    cout << "Enter data for nodes: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }

    for (int i = 0; i < n; i++)
    {
        Node *newNode = createNode(num[i]);

        newNode->next = start;
        start = newNode;
    }

    // Perform the additional operations (removing the last node and adding a new node) four times
    for (int i = 0; i < 4; i++)
    {
        Node *current = start;
        Node *prev = NULL;

        while (current->next != NULL)
        {
            prev = current;
            current = current->next;
        }

        delete current;

        Node *Node5 = createNode(0);
        prev->next = Node5;

        printLinkedList(start);
    }

    // Free the memory of the entire linked list
    freeLinkedList(start);

    return 0;
}
