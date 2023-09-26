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
    Node* newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

int main()
{
    Node *start = NULL; // Initialize the start pointer to NULL

    int n;
    cout << "Enter the number of nodes: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int num;
        cout << "Enter data for node " << i + 1 << ": ";
        cin >> num;

        // Create a new node with the entered data
        Node *newNode = createNode(num);

        // Connect the new node to the linked list
        newNode->next = start;
        start = newNode;
    }

    // Print the linked list
    Node *current = start;
    while (current != NULL)
    {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;

    // Free the memory of the entire linked list
    current = start;
    while (current != NULL)
    {
        Node *temp = current;
        current = current->next;
        free(temp);
    }

    return 0;
}
