#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *front = NULL;
struct Node *rear = NULL;

int isEmpty()
{
    return front == NULL;
}

void enqueue(int x)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = x;
    newNode->next = NULL;

    if (rear == NULL)
    {
        front = rear = newNode;
        return;
    }

    rear->next = newNode;
    rear = newNode;
}

int dequeue()
{
    if (isEmpty())
    {
        printf("Queue Empty\n");
        return -1;
    }

    struct Node *temp = front;
    int data = temp->data;
    front = front->next;

    if (front == NULL)
    {
        rear = NULL;
    }

    free(temp);
    return data;
}

void printqueue()
{
    struct Node *temp = front;
    while (temp != NULL)
    {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}

int main()
{
    dequeue();
    enqueue(10);
    enqueue(12);
    enqueue(20);
    printqueue();
    printf("%d\n", dequeue());
    printf("%d\n", dequeue());
    printqueue();
    dequeue();
    printqueue();

    return 0;
}
