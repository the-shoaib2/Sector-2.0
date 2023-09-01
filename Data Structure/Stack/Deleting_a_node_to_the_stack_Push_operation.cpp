#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int top = -1;
int mystack[MAX];

int isEmpty() {
    if (top == -1) {
        printf("\nStack is Empty\n");
        return 1;
    } else {
        printf("\nStack is not Empty\n");
        return 0;
    }
}

int isFull() {
    if (top == (MAX - 1)) {
        printf("\nStack is Full\n");
        return 1;
    } else {
        printf("\nStack is not Full\n");
        return 0;
    }
}

void push(int data) {
    if (!isFull()) {
        printf("\nPushing Value %d\n", data);
        top++;
        mystack[top] = data;
    }
}

int pop() {
    if (!isEmpty()) {
        int temp = mystack[top];
        top--;
        return temp;
    }
    return -1; // Return -1 to indicate an error (stack underflow)
}

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

    push(10);
    push(20);
    push(30);

    printarr();

    data = pop();
    if (data != -1) {
        printf("Popped value: %d\n", data);
    }

    printarr();

    return 0;
}
