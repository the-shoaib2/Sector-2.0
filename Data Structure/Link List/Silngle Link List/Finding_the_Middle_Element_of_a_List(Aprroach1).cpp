#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}node;

int main()
{
    node *node1 = (node *) malloc(sizeof(node));
    node *node2 = (node *) malloc(sizeof(node));
    node *node3 = (node *) malloc(sizeof(node));
    node *node4 = (node *) malloc(sizeof(node));
    node *node5 = (node *) malloc(sizeof(node));

    node1->data = 1;
    node2->data = 2;
    node3->data = 3;
    node4->data = 4;
    node5->data = 5;

    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;
    node5->next = NULL;

    node *start = node1;
    node *p = start;
    int n=0, mid;
    while(p!=NULL)
    {
        n++;
        p = p->next;
    }

    mid = n/2;
    p=start;
    while(mid)
    {
        p=p->next;
        mid--;
    }

    printf("Mid element is: %d", p->data);
    return 0;
}
