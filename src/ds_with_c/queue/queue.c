// queue in c

#include "stdio.h"
#include "stdbool.h" // to create boolean function
#include "stdlib.h" // for malloc function
/* 
queue: First In First Out
    -> Enqueue: push
    -> Dequeue:pop
    -> IsEmpty
    -> IsFull
    -> Peek
    -> size
*/

#define SIZE 8

typedef struct _queue
{
    int items[SIZE];
    int front;
    int rear;
}queue;

void create_queue(queue *q)
{
    q->front = -1;
    q->rear = -1;
}

bool is_full(queue *q)
{
    if(q->rear == SIZE - 1)
        return true;
    else
        return false;
}

bool is_empty(queue *q)
{
    if(q->front == -1)
        return true;
    else
        return false;
}

void enqueue(queue *q, int input)
{
    if(!is_full(q))
    {
        if(q->front == -1)
            q->front = 0;
        q->rear+=1;
        q->items[q->rear] = input;
    }
    else
    {
        printf("Queue is already full !");
    }
}

int peek(queue *q)
{
    if(!is_empty(q))
        return q->items[q->front];
}

void dequeue(queue *q)
{
    if(!is_empty(q))
    {
        q->front=+1;
        if(q->front > q->rear)
            q->front = q->rear - 1;
    }
    else
    {
        printf("Queue is already empty !");
    }
}

int size_of_queue(queue *q)
{
    return q->rear+1;
}

void print_queue(queue *q)
{
    if(!is_empty(q))
    {
        printf("=== Queue ===\n");
        for(int i = q->front;i <= q->rear; i++)
        {
            printf("%d ",q->items[i]);
        }
        printf("\n");
    }
}

int main()
{
    queue *stuff = (queue *)malloc(sizeof(queue));

    create_queue(stuff);

    int current;
    current = peek(stuff);
    printf("Peek: %d\n",current);

    // 5 4 3 6 1 9
    enqueue(stuff,5);
    enqueue(stuff,4);
    enqueue(stuff,3);
    enqueue(stuff,6);
    enqueue(stuff,1);
    enqueue(stuff,9);

    current = peek(stuff);
    printf("Peek: %d\n",current);

    print_queue(stuff);

    int size = size_of_queue(stuff);
    printf("Size of queue: %d\n",size);

    dequeue(stuff);

    print_queue(stuff);

    return 0;
}