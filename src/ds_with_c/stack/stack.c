// stack in c

#include "stdio.h"
#include "stdbool.h" // to create boolean function
#include "stdlib.h" // for malloc function

/* 
stack: Last In First Out
    -> push
    -> size
    -> pop
    -> top
    -> empty
    -> swap
    -> emplace
*/

// stack values
#define MAX 8
int count = 0;

// stack structure
typedef struct _stack
{
    int elements[MAX];
    int top;
}stack;

void create_empty_stack(stack *s)
{
    s->top = -1;
}

bool isstack_full(stack *s)
{
    if(s->top==MAX-1)
        return true;
    else 
        return false;
}

bool isstack_empty(stack *s)
{
    if(s->top==-1)
        return true;
    else
        return false;
}

void push(stack *s,int input)
{
    if(!isstack_full(s))
    {
        s->top++;
        s->elements[s->top] = input;
    }
    else
    {
        printf("Stack is FULL!");
    }
}

void pop(stack *s)
{
    if(!isstack_empty(s))
    {
        s->top--;
    }
    else
    {
        printf("Stack is EMPTY!");
    }
}

int size_of_stack(stack *s)
{
    return s->top+1;
}

void print_stack(stack *s)
{
    if(!isstack_empty(s))
    {
        printf("Stack: ");
        for(int i=0;i<size_of_stack(s);i++)
        {
            printf("%d ",s->elements[i]);
        }
        printf("\n");
    }
    else
    {
        printf("Stack is EMPTY!");
    }
}

void swap_stack(stack *s1, stack *s2)
{
    stack swap;
    swap = *s1;
    *s1 = *s2;
    *s2 = swap;
}

void emplace_stack(stack *s,int input)
{
    push(s,input);
    
    stack *new_stack = (stack *)malloc(sizeof(stack));
    create_empty_stack(new_stack);
    
    for(int i=s->top;i>-1;i--)
    {
        push(new_stack,s->elements[i]);
    }
    
    *s = *new_stack;
}

int main()
{
    // Dynamic memory allocation
    stack *s = (stack *)malloc(sizeof(stack));

    create_empty_stack(s);

    push(s,2);
    push(s,-3);
    push(s,7);
    push(s,11);

    print_stack(s);

    int size;
    size = size_of_stack(s);
    printf("Size of stack: %d\n",size);

    pop(s);

    printf("Stack s ==> ");
    print_stack(s);

    stack *s1 = (stack *)malloc(sizeof(stack));

    create_empty_stack(s1);

    push(s1,3);
    push(s1,5);
    push(s1,8);

    printf("Stack s1 ==> ");
    print_stack(s1);

    swap_stack(s,s1);
    
    printf("Stack s ==> ");
    print_stack(s);
    printf("Stack s1 ==> ");
    print_stack(s1);

    emplace_stack(s,6);
    print_stack(s);

    return 0;
}