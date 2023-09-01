#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// Creating Node
struct node
{
    int data;
    struct node *next;
};

int main()
{
    // Initialize Nodes
    struct node *start;
    // Allocatre memory & Initialize Nodes
    struct node *node1 = (struct node *)malloc(sizeof(struct node));
    struct node *node2 = (struct node *)malloc(sizeof(struct node));
    struct node *node3 = (struct node *)malloc(sizeof(struct node));

    // Assing node
    node1->data = 1;
    node2->data = 2;
    node3->data = 3;
    // Connect Node
    node1->next = node2;
    node2->next = node3;
    node3->next = NULL;

    start = node1;
    // insert new node Starting Point
    // struct node *newNode;
    // struct node *newNode = (struct node *)malloc(sizeof(struct node));

    // newNode -> data = 0;
    // newNode -> next =node1;
    // Start = newNode;

    // insert new node Ending Point
    struct node *newNode;
    struct node *newNode = (struct node *)malloc(sizeof(struct node));

    newNode->data = 4;
    newNode->next = NULL;
    // node3 -> next = NULL;

    // traver all node using while loop
    struct node *p;
    p = start;
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = newNode;

    // insert new node Nth Point
    struct node *newNode;
    struct node *newNode = (struct node *)malloc(sizeof(struct node));

    newNode->data = 4;
    newNode->next = NULL;

    int k = 7;

    struct node *p;
    p = start;

    for (int i = 2; i < k; i++)
    {
        if (p->next != NULL)
            p  -> next;
    }
    newNode->next = p->next; // this line point node3 to new node
    p->next = newNode;

    return 0;
}
