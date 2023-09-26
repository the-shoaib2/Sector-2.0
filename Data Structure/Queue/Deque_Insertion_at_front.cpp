#include <stdio.h>
#include <stdlib.h>
#define MAX 5

int deque[MAX];
int front = -1;
int rear = -1;

// Function to check if the deque is empty
int isEmpty() {
    return front == -1;
}

// Function to check if the deque is full
int isFull() {
    return (front == 0 && rear == MAX - 1) || (front == rear + 1);
}

// Function to add an element to the rear of the deque (enqueue)
void enqueueRear(int data) {
    if (isFull()) {
        printf("Queue is full. Cannot enqueue.\n");
    } else {
        if (isEmpty()) {
            front = rear = 0; // Initialize front and rear for the first element
        } else if (rear == MAX - 1) {
            rear = 0; // Wrap around to the beginning if rear reaches the end
        } else {
            rear++;
        }
        deque[rear] = data;
        printf("Enqueued at Rear: %d\n", data);
    }
}

// Function to add an element to the front of the deque (special enqueue)
void enqueueFront(int data) {
    if (isFull()) {
        printf("Queue is full. Cannot enqueue at front.\n");
    } else {
        if (isEmpty()) {
            front = rear = 0; // Initialize front and rear for the first element
        } else if (front == 0) {
            front = MAX - 1; // Wrap around to the end if front reaches the beginning
        } else {
            front--;
        }
        deque[front] = data;
        printf("Enqueued at Front: %d\n", data);
    }
}

// Function to remove an element from the front of the deque (dequeue)
void dequeueFront() {
    if (isEmpty()) {
        printf("Queue is empty. Cannot dequeue from front.\n");
    } else {
        int data = deque[front];
        printf("Dequeued from Front: %d\n", data);

        if (front == rear) {
            front = rear = -1; // Reset front and rear when the last element is dequeued
        } else if (front == MAX - 1) {
            front = 0; // Wrap around to the beginning if front is at the end
        } else {
            front++;
        }
    }
}

// Function to display the deque
void display() {
    if (isEmpty()) {
        printf("Queue is empty.\n");
    } else {
        int i = front;
        printf("Queue elements: ");
        while (1) {
            printf("%d ", deque[i]);
            if (i == rear) {
                break;
            }
            if (i == MAX - 1) {
                i = 0;
            } else {
                i++;
            }
        }
        printf("\n");
    }
}

int main() {
    enqueueRear(10);
    enqueueRear(20);
    enqueueRear(30);

    display();

    enqueueFront(5);
    enqueueFront(15);

    display();

    dequeueFront();
    dequeueFront();

    display();

    return 0;
}
