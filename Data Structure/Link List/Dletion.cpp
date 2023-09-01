#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// Creating Node
struct node
{

    struct node *next;
    int data;
};

int main()
{
    // Initialize Nodes
    struct node *start, *nodel;
    // Allocatrew memory & Initialize Nodes
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

    struct node *start = nodel;
    struct node *temp = start;
    start = start-> next;
    free(node1);

    // struct node *p = start;


    // Delete from end
   struct node *p = start;
    while (p->next->next != NULL)
    {
        p = p->next;
    }
    p->next = NULL;




//print 
    while (p != NULL)
    {
        printf("%d\n", p->data);
        p = p->next;
    }

    return 0;
}
