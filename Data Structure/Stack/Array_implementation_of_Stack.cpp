#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int top = -1;
int mystack[MAX];

// Function to check if the stack is empty
int isEmpty() {
    if (top == -1) {
        printf("\nStack is Empty\n");
        return 1;
    } else {
        printf("\nStack is not Empty\n");
        return 0;
    }
}

// Function to check if the stack is full
int isFull() {
    if (top == (MAX - 1)) {
        printf("\nStack is Full\n");
        return 1;
    } else {
        printf("\nStack is not Full\n");
        return 0;
    }
}

// Function to push data onto the stack
void push(int data) {
    if (!isFull()) {
        printf("\nPushing Value %d\n", data);
        top++;
        mystack[top] = data;
    }
}

// Function to pop data from the stack
int pop() {
    if (!isEmpty()) {
        int temp = mystack[top];
        top--;
        return temp;
    }
}

// Function to print the stack contents
void printarr() {
    int i;
    if (isEmpty()) {
        printf("\nThe stack is empty\n");
    } else {
        printf("\nPrinting Value Of Mystack: ");
        for (i = 0; i <= top; i++) {
            printf("%d ", mystack[i]);
        }
        printf("\n");
    }
}

int main() {
    int data;

    // Pushing values onto the stack
    push(10);
    push(20);
    push(30);

    // Printing the stack contents
    printarr();

    // Popping a value from the stack
    data = pop();
    if (data != -1) {
        printf("Popped value: %d\n", data);
    }

    // Printing the updated stack contents
    printarr();

    return 0;
}
