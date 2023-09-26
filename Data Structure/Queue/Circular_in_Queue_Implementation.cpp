#include <stdio.h>
#define MAX 5

int queue[MAX];
int front = -1;
int rear = -1;

// Function to check if the circular queue is empty
int isEmpty() {
    return front == -1 && rear == -1;
}

// Function to check if the circular queue is full
int isFull() {
    return (rear + 1) % MAX == front;
}

// Function to add an element to the circular queue (enqueue)
void enqueue(int data) {
    if (isFull()) {
        printf("Queue is full. Cannot enqueue.\n");
    } else {
        if (isEmpty()) {
            front = rear = 0; // Initialize front and rear for the first element
        } else {
            rear = (rear + 1) % MAX; // Circular increment of rear
        }
        queue[rear] = data;
        printf("Enqueued: %d\n", data);
    }
}

// Function to remove an element from the circular queue (dequeue)
void dequeue() {
    if (isEmpty()) {
        printf("Queue is empty. Cannot dequeue.\n");
    } else {
        int data = queue[front];
        printf("Dequeued: %d\n", data);

        if (front == rear) {
            front = rear = -1; // Reset front and rear when the last element is dequeued
        } else {
            front = (front + 1) % MAX; // Circular increment of front
        }
    }
}

// Function to display the circular queue
void display() {
    if (isEmpty()) {
        printf("Queue is empty.\n");
    } else {
        int i = front;
        printf("Queue elements: ");
        do {
            printf("%d ", queue[i]);
            i = (i + 1) % MAX; // Circular increment
        } while (i != (rear + 1) % MAX);
        printf("\n");
    }
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);

    display();

    dequeue();
    dequeue();

    display();

    enqueue(40);
    enqueue(50);
    enqueue(60);

    display();

    return 0;
}
