#include <stdio.h>
#define MAX 5

int deque[MAX];
int front = -1;
int rear = -1;

// Function to check if the deque is empty
int isEmpty() {
    return front == -1 && rear == -1;
}

// Function to check if the deque is full
int isFull() {
    return (rear + 1) % MAX == front;
}

// Function to insert an element at the rear of the deque (enqueue operation)
void enqueueRear(int data) {
    if (isFull()) {
        printf("Deque is full. Cannot enqueue at rear.\n");
    } else {
        if (isEmpty()) {
            front = rear = 0; // Initialize front and rear for the first element
        } else {
            rear = (rear + 1) % MAX; // Circular increment
        }
        deque[rear] = data;
        printf("Enqueued at rear: %d\n", data);
    }
}

// Function to remove an element from the front of the deque (dequeue operation)
void dequeueFront() {
    if (isEmpty()) {
        printf("Deque is empty. Cannot dequeue from front.\n");
    } else {
        int data = deque[front];
        printf("Dequeued from front: %d\n", data);

        if (front == rear) {
            front = rear = -1; // Reset front and rear when the last element is dequeued
        } else {
            front = (front + 1) % MAX; // Circular increment
        }
    }
}

// Function to display the deque
void display() {
    if (isEmpty()) {
        printf("Deque is empty.\n");
    } else {
        int i = front;
        printf("Deque elements: ");
        while (i != rear) {
            printf("%d ", deque[i]);
            i = (i + 1) % MAX; // Circular increment
        }
        printf("%d\n", deque[rear]);
    }
}

int main() {
    enqueueRear(10);
    enqueueRear(20);
    enqueueRear(30);

    display();

    dequeueFront();
    dequeueFront();

    display();

    enqueueRear(40);
    enqueueRear(50);
    enqueueRear(60);

    display();

    return 0;
}

