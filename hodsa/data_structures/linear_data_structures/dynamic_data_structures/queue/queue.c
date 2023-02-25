#include <stdio.h>
#include <stdbool.h> // bool
#include <stdlib.h>  // malloc()

#define MAX_ELEMENT 10
typedef struct Queue
{
    int front;
    int rear;
    int elements[MAX_ELEMENT];
}Queue;

// - createQueue
void createQueue(Queue *queue)
{
    printf("Queue created...\n");
    queue->front = -1;
    queue->rear = -1;
}

// - isEmpty
bool isEmpty(Queue *queue)
{
    if(queue->front == -1)
        return true;
    else
        return false;
}

// - isFull
bool isFull(Queue *queue)
{
    if(queue->rear == MAX_ELEMENT-1)
        return true;
    else
        return false;
}

// - enqueue
void enqueue(Queue *queue, int value)
{
    if(!isFull(queue))
    {
        if(isEmpty(queue))
            queue->front = 0;
        ++(queue->rear);
        queue->elements[queue->rear] = value;
    }
    else
    {
        printf("The queue is full. Use dequeue() and try again.\n");
    }
}

// - dequeue
void dequeue(Queue *queue)
{
    if(!isEmpty(queue))
    {
        printf("Removing %d from the queue.\n",queue->elements[queue->front]);
        ++(queue->front);
        
        if(queue->front > queue->rear)
        {
            queue->front = -1;
            queue->rear = -1;
        }
    }
    else
    {
        printf("The queue is empty. Use queue() and try again.\n");
    }
}

// - peek
int peek(Queue *queue)
{
    if(!isEmpty(queue))
    {
        return queue->elements[queue->front];
    }
}

// - printQueue
void printQueue(Queue *queue)
{
    if(!isEmpty(queue))
    {
        printf("Elemments of the queue: ");
        for(int i=0;i<=queue->rear;i++)
        {
            printf(" %d ", queue->elements[i]);
        }
        printf("\n");
    }
}

int main()
{
    Queue *queue = (Queue *)malloc(sizeof(Queue));

    createQueue(queue);

    printf("Is queue empty: %d \n", isEmpty(queue));
    printf("Is queue full: %d \n", isFull(queue));

    printf("After first push: \n");
    enqueue(queue, 1);
    enqueue(queue, 7);
    enqueue(queue, -4);
    enqueue(queue, 8);
    enqueue(queue, 6);

    printQueue(queue);

    int peek_value = peek(queue);
    printf("Peek value of the queue: %d \n", peek_value);

    printf("After dequeue: \n");
    dequeue(queue);
    dequeue(queue);
    dequeue(queue);
    dequeue(queue);
    dequeue(queue);


    printf("After second push: \n");
    enqueue(queue, 0);
    enqueue(queue, 2);
    enqueue(queue, 4);
    enqueue(queue, -5);
    enqueue(queue, 3);
    enqueue(queue, 3);
    enqueue(queue, 7);
    enqueue(queue, 1);
    enqueue(queue, 7);
    enqueue(queue, -4);
    enqueue(queue, 8);
    enqueue(queue, 6);
    
    printQueue(queue);

    peek_value = peek(queue);
    printf("Peek value of the queue: %d \n", peek_value);

    printf("Is queue empty: %d \n", isEmpty(queue));
    printf("Is queue full: %d \n", isFull(queue));


    return 0;
}