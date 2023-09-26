// // #include <iostream>
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

//     Node *current = Node1;

    // for (int i = 0; i < 4; i++)
    // {
    //     Node *current = Node1;
    //     Node *prev = NULL;

    //     while (current->next != NULL)
    //     {
    //         prev = current;
    //         current = current->next;
    //     }

    //     free(current);
    //     prev->next = NULL;

    //     Node *Node5 = (Node *)malloc(sizeof(Node));
    //     Node5->data = 0;
    //     Node5->next = Node1;
    //     Node1 = Node5;

    //     while (current != NULL)
    //     {
    //         cout << current->data << " ";
    //         current = current->next;
    //     }

    //     cout << endl;
    // }

//     return 0;
// }




#include <iostream>
using namespace std;

typedef struct Node
{
    int data;
    struct Node *next;
} Node;

Node* createNode(int data)
{
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

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
    cout << "Enter data for nodes: "<< endl;
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

    // printLinkedList(start);

    for (int i = 0; i < n; i++)
    {
        Node *current = start;
        Node *prev = NULL;

        while (current->next != NULL)
        {
            prev = current;
            current = current->next;
        }

        delete current;
        prev->next = NULL;

        Node *newNode = createNode(0);
        newNode->next = start;
        start = newNode;

        
        printLinkedList(start);
    }

    
    freeLinkedList(start);

    return 0;
}

