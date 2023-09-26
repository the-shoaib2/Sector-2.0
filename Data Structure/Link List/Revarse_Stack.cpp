#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
} node;

node *top = NULL;

int isEmpty()
{
    return (top == NULL);
}

void push(int item)
{
    node *newNode = (node *)malloc(sizeof(node));
    if (newNode == NULL)
    {
        printf("Stack overflow\n");
        exit(0);
    }
    newNode->data = item;
    newNode->next = top;
    top = newNode;
}

int pop()
{
    int item;
    node *temp;
    if (top == NULL)
    {
        printf("Stack Underflow\n");
        exit(0);
    }
    else
    {
        temp = top;
        item = top->data;
        top = top->next;
        free(temp);
        return item;
    }
}
void print()
{
    node *p = top;
    printf("\n");
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
}

void insertBottom(int item)
{
    int temp;
    if (isEmpty())
    {
        push(item);
    }
    else
    {
        temp = pop();
        insertBottom(item);
        push(temp);
    }
}
void reverse()
{
    if (!isEmpty())
    {
        int temp = pop();
        reverse();
        insertBottom(temp);
    }
}

// Driver Code
int main()
{
    push(5);
    push(4);
    push(3);
    push(2);
    push(1);

    printf("\n Original Stack ");
    print();
    reverse();
    printf("\n Reversed Stack ");
    print();
    return 0;
}
