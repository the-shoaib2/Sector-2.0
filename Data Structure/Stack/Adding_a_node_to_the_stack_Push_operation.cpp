#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int top = -1;
int mystack[MAX];

typedef struct Node
{
    int data;
    struct Node *next;
} Node;

// Function to check if the stack is empty
int isEmpty()
{
    return top == -1;
}

// Function to check if the stack is full
int isFull()
{
    return top == (MAX - 1);
}

// Function to push data onto the stack
void push(int data)
{
    if (!isFull())
    {
        top++;
        mystack[top] = data;
    }
}

// Function to pop data from the stack and return a new node
Node *pop()
{
    Node *newNode = NULL;
    if (!isEmpty())
    {
        int temp = mystack[top];
        top--;

        // Create a new node with the popped value
        newNode = (struct Node *)malloc(sizeof(struct Node));
        newNode->data = temp;
        newNode->next = NULL;
    }
    return newNode;
}

// Function to add a new node to the stack
void pushNode(struct Node *node)
{
    if (!isFull() && node != NULL)
    {
        top++;
        mystack[top] = node->data;
        free(node); // Free the memory of the node as it's now part of the stack
    }
}

// Function to print the stack contents
void printarr()
{
    if (isEmpty())
    {
        printf("\nThe stack is empty\n");
    }
    else
    {
        printf("\nPrinting Value Of Mystack: ");
        for (int i = 0; i <= top; i++)
        {
            printf("%d ", mystack[i]);
        }
        printf("\n");
    }
}

int main()
{
    // Pushing values onto the stack
    push(10);
    push(20);
    push(30);

    // Printing the stack contents
    printarr();

    // Popping a value from the stack and getting a new node
    Node *newNode = pop();
    if (newNode != NULL)
    {
        printf("Popped value: %d\n", newNode->data);
        // Add the new node back to the stack
        pushNode(newNode);
    }

    // Printing the updated stack contents
    printarr();

    return 0;
}
