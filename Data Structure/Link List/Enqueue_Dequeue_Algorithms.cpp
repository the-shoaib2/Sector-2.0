#include <stdio.h>
#include <stdlib.h>
#define max 2

int arr[max];
int first = 0, last = 0;

int isFull()
{
    if (last == max)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isEmpty()
{
    if (first == last)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void enqueue(int x)
{
    if (!isFull())
    {
        arr[last++] = x; // Add x to the end of the queue and increment 'last'
    }
    else
    {
        printf("Queue Full\n");
    }
}

int dequeue()
{
    if (!isEmpty())
    {
        return arr[first++]; // Remove and return the element at the front of the queue, then increment 'first'
    }
    else
    {
        printf("Queue Empty\n");
        return -1;
    }
}

void printqueue()
{
    if (!isEmpty())
    {
        for (int i = first; i < last; i++) // Print the elements from 'first' to 'last'
        {
            printf("%d\n", arr[i]);
        }
    }
    else
        printf("Empty\n");
}

int main()
{
    dequeue(); 
    printf("%d %d\n", first, last);
    enqueue(10); 
    enqueue(12); 
    printf("%d %d\n", first, last);

    enqueue(20); 
    printf("%d %d\n", first, last);
    printf("%d \n", dequeue()); 
    printf("%d %d\n", first, last);

    printf("%d \n", dequeue()); 
    printf("%d %d\n", first, last);

    dequeue(); 
    printf("%d %d\n", first, last);

    return 0;
}
