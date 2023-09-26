#include <stdio.h>
#define MAX_SIZE 10

int queue[MAX_SIZE];
int front = -1;
int rear = -1;

// Function to check if the queue is empty
int isEmpty() {
    return front == -1;
}

// Function to check if the queue is full
int isFull() {
    return rear == MAX_SIZE - 1;
}

// Function to add an element to the queue (enqueue)
void enqueue(int data) {
    if (isFull()) {
        printf("Queue is full. Cannot enqueue.\n");
    } else {
        if (front == -1) {
            front = 0; // Initialize front when adding the first element
        }
        rear++;
        queue[rear] = data;
        printf("Enqueued: %d\n", data);
    }
}

// Function to remove an element from the queue (dequeue)
void dequeue() {
    if (isEmpty()) {
        printf("Queue is empty. Cannot dequeue.\n");
    } else {
        int data = queue[front];
        printf("Dequeued: %d\n", data);

        if (front == rear) {
            front = rear = -1; // Reset front and rear when the last element is dequeued
        } else {
            front++;
        }
    }
}

// Function to display the queue
void display() {
    if (isEmpty()) {
        printf("Queue is empty.\n");
    } else {
        printf("Queue elements: ");
        for (int i = front; i <= rear; i++) {
            printf("%d ", queue[i]);
        }
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
