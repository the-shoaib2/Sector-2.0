#include <stdio.h>
#define MAX 100

int queue[MAX];
int front = -1, reare = -1;

void enque(int n)
{
    if (reare == MAX - 1)
    {
        return;
    }
    if (front == -1)
    {
        front = 0;
    }
    queue[++reare] = n;
}

int dequeue(){
    if (front == -1  || front > reare)
    {
       return -1;
    }
    return queue[front++];
}




