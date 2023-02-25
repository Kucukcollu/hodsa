#include <stdio.h>
#include <stdbool.h> // bool
#include <stdlib.h> // malloc()

#define MAX_ELEMENT 10
typedef struct stack
{
    int top;
    int elements[MAX_ELEMENT];
}Stack;

void createStack(Stack *stack)
{
    stack->top = -1;
    printf("Stack created...\n");
}

bool isFull(Stack *stack)
{
    if(stack->top == MAX_ELEMENT - 1)
        return true;
    else
        return false;
}

bool isEmpty(Stack *stack)
{
    if(stack->top == -1)
        return true;
    else
        return false;
}

void push(Stack *stack, int value)
{
    if(!isFull(stack))
        stack->elements[++(stack->top)] = value;
    else
        printf("The stack is full. Use pop() and try again.\n");
}

void pop(Stack *stack)
{
    if(!isEmpty(stack))
        --(stack->top);
    else
        printf("The stack is already empty. Use push() and try again.\n");
    
}

int peek(Stack *stack)
{   
    if(!isEmpty(stack))
        return stack->elements[stack->top];
}

void printStack(Stack *stack)
{
    if(!isEmpty(stack))
    {
        printf("Elements of the stack: ");
        for(int i=0; i<=stack->top; i++)
        {
            printf(" %d ",stack->elements[i]);
        }
        printf("\n");
    }
}

int main()
{
    Stack *stack = (Stack *)malloc(sizeof(Stack));
    createStack(stack);

    printf("Is stack empty: %d \n", isEmpty(stack));
    printf("Is stack full: %d \n", isFull(stack));

    pop(stack);
    
    printf("After push: \n");
    push(stack,2);
    push(stack,3);
    push(stack,7);
    push(stack,1);
    push(stack,9);

    printStack(stack);

    int peek_value = peek(stack);
    printf("Peek value of the stack: %d\n",peek_value);

    pop(stack);
    pop(stack);

    printf("After pop: \n");
    printStack(stack);

    printf("After second push: \n");
    push(stack,4);
    push(stack,6);
    push(stack,0);
    push(stack,7);
    push(stack,1);
    push(stack,5);
    push(stack,5);

    printStack(stack);

    printf("Is stack empty: %d \n", isEmpty(stack));
    printf("Is stack full: %d \n", isFull(stack));

    return 0;
}