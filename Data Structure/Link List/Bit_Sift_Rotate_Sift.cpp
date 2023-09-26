#include <iostream>
using namespace std;

typedef struct Node
{
    int data;
    struct Node *next;
} Node;

int main()
{
    Node *start;

    Node *Node1 = (Node *)malloc(sizeof(Node));
    Node *Node2 = (Node *)malloc(sizeof(Node));
    Node *Node3 = (Node *)malloc(sizeof(Node));
    Node *Node4 = (Node *)malloc(sizeof(Node));

    Node1->data = 1;
    Node2->data = 0;
    Node3->data = 0;
    Node4->data = 1;

    Node1->next = Node2;
    Node2->next = Node3;
    Node3->next = Node4;
    Node4->next = NULL;


    for (int i = 0; i < 4; i++)
    {
        
        Node *current = Node1;
        while (current->next->next != NULL)
        {
            current = current->next;
        }

        Node *newLast = current->next;
        current->next = NULL;     

        
        newLast->next = Node1;
        Node1 = newLast;
    }

    Node *current = Node1;
    while (current != NULL)
    {
        cout << current->data << " ";
        current = current->next;
    }

    return 0;
}
