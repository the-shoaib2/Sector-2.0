#include <stdio.h>
#include <stdlib.h>

// Define a structure forchi  a node in the queue
typedef struct Node
{
    int data;
    struct Node *next;
} Node;

// Define global pointers for the front and rear of the queue
Node *front = NULL;
Node *rear = NULL;

// Function to enqueue (add) an element to the queue
void enqueue(int k)
{
    // Allocate memory for a new node
    Node *temp = (Node *)malloc(sizeof(Node));
    if (temp == NULL)
    {
        printf("Memory allocation failed!\n");
        exit(1); // Exit the program on memory allocation failure
    }
    temp->data = k;
    temp->next = NULL;

    if (rear == NULL)
    {
        // If the queue is empty, set both front and rear to the new node
        front = rear = temp;
    }
    else
    {
        // Otherwise, add the new node to the end of the queue
        rear->next = temp;
        rear = temp;
    }
}

// Function to dequeue (remove) an element from the queue                 
int dequeue()
{
    if (front == NULL)
    {
        printf("Queue is empty!\n");
        exit(1); // Exit the program if dequeue is called on an empty queue
    }
    Node *temp = front;
    int dequeuedValue = temp->data;
    front = front->next;
    free(temp);
    if (front == NULL)
    {
        rear = NULL;
    }
    return dequeuedValue;
}

// Function to display the elements in the queue
void display()
{
    if (front == NULL)
    {
        printf("Queue is empty!\n");
        return;
    }
    Node *current = front;
    printf("Queue elements: ");
    while (current != NULL)
    {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

int main()
{
    // Enqueue some elements into the queue
    enqueue(10);
    enqueue(20);
    enqueue(30);

    // Display the queue elements
    display();
int n= 100;
while (n--)
{
    enqueue(n);
}


    // Display the updated queue
    display();

    return 0;
}
