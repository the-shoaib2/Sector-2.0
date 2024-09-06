#include <stdio.h>
#include <stdlib.h>

// Define a structure for a node in the linked list
typedef struct Node
{
    int data;
    struct Node *next;
} Node;

Node *top = NULL; // Initialize the top of the stack as NULL

// Function to push data onto the stack
void push(int data)
{
    Node *newNode = new Node;
    // Node *newNode = (Node *)malloc(sizeof(Node));
    if (newNode == NULL)
    {
        printf("Stack Overflow\n");
        return;
    }
    newNode->data = data;
    newNode->next = top;
    top = newNode;
    printf("Pushed value: %d\n", data);
}

// Function to pop data from the stack
int pop()
{
    if (top == NULL)
    {
        printf("Stack is Empty\n");
        return -1; // Return a sentinel value to indicate an empty stack
    }
    Node *temp = top;
    int data = temp->data;
    top = top->next;
    free(temp);
    return data;
}

// Function to check if the stack is empty
int isEmpty()
{
    return top == NULL;
}

// Function to print the stack contents
void printStack()
{
    struct Node *current = top;
    printf("Stack: ");
    while (current != NULL)
    {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

int main()
{
    // Pushing values onto the stack
    push(10);
    push(20);
    push(30);

    // Printing the stack contents
    printStack();

    // Popping values from the stack
    int poppedValue1 = pop();
    int poppedValue2 = pop();
    int poppedValue3 = pop();

    // Printing the popped values
    printf("Popped values: %d, %d, %d\n", poppedValue1, poppedValue2, poppedValue3);

    // Check if the stack is empty
    if (isEmpty())
    {
        printf("Stack is Empty\n");
    }
    else
    {
        printf("Stack is not Empty\n");
    }

    return 0;
}
