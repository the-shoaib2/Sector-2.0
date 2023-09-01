#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node in the stack
struct node
{
    int data;
    struct node *previous;
};

// Declare the top of the stack as a global variable
struct node *top = NULL;

// Function to push a value onto the stack 
void push(int val)
{
    // Allocate memory for a new node
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = val;
    newNode->previous = top; // Set the previous pointer of the new node to the current top
    top = newNode; // Update the top to point to the new node
}

// Function to pop an element from the stack
void pop()
{
    struct node *temp;
    if (top == NULL)
    {
        printf("Stack is Empty!\n");
    }
    else
    {
        printf("Popped Element: %d\n", top->data);
        temp = top;
        top = top->previous; // Move the top pointer to the previous node
        free(temp); // Free the memory of the popped node
    }
}

// Function to print the elements of the stack
void printStack()
{
    struct node *temp = top;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->previous;
    }
    printf("\n");
}

int main()
{
    printf("Initial Stack\n");

    // Push elements onto the stack
    push(10);
    printf("After Pushing 10, the new Stack\n");
    printStack();

    push(20);
    printf("After Pushing 20, the new Stack\n");
    printStack();

    push(30);
    printf("After Pushing 30, the new Stack\n");
    printStack();

    // Pop elements from the stack
    pop();
    printf("After Popping, the new Stack\n");
    printStack();

    pop();
    printf("After Popping, the new Stack\n");
    printStack();

    pop();
    printf("After Popping, the new Stack\n");
    printStack();

    return 0;
}
