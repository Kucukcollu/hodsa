#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
}Node;

/*
input: 
head -> 1 -> 2 -> 3 -> 4 -> 5 -> NULL
*/
Node* insert(Node *node, int data)
{
    Node *start = node;
    Node *current = start->next;
    
    while(current != NULL)
    {   
        if(current->next == NULL)
        {
            Node *temp;
            temp = (Node *)malloc(sizeof(Node));
            temp->data = data;
            temp->next = NULL;
            current->next = temp;
        }
        current = current->next;
    }

    return ;
}
/*
output: 
head -> 1 -> 2 -> 3 -> 4 -> 5 -> 6 -> NULL
*/

int length(Node *node)
{
    int count = 0;
    while(node != NULL)
    {
        count++;
        node = node->next;
    }
    return count;
}

void delete()
{
}

/*
input: 
head -> 1 -> 2 -> 3 -> 4 -> 5 -> NULL
*/
Node* reverse(Node *head)
{
    Node *past = NULL;
    Node *current = head;
    
    while(current != NULL)
    {
        Node* next = current->next;
        current->next = past;
        past = current;
        current = next;
    }

    head = past;

    return head;
}
/*
output:
NULL <- 1 <- 2 <- 3 <- 4 <- 5 <- head
*/

void printNode(Node *node)
{
    printf("Linked List: ");
    while(node != NULL)
    {
        printf(" %d ", node->data);
        node = node->next;
    }
    printf("\n");
}

void search()
{

}

int get()
{

}

/*
head -> 1 -> 2 -> 3 -> 4 -> 5 -> NULL
*/

int main()
{
    Node *head;
    Node *first_node;
    Node *second_node;
    Node *third_node;
    Node *fourth_node;
    Node *fifth_node;

    first_node = (Node *)malloc(sizeof(Node));
    second_node = (Node *)malloc(sizeof(Node));
    third_node = (Node *)malloc(sizeof(Node));
    fourth_node = (Node *)malloc(sizeof(Node));
    fifth_node = (Node *)malloc(sizeof(Node));

    head = first_node;

    first_node->data = 1;
    first_node->next = second_node;

    second_node->data = 2;
    second_node->next = third_node;

    third_node->data = 3;
    third_node->next = fourth_node;

    fourth_node->data = 4;
    fourth_node->next = fifth_node;

    fifth_node->data = 5;
    fifth_node->next = NULL;

    printNode(head);

    printf("Length of Linked List: %d\n", length(head));

    Node *reverse_head = reverse(head);
    printNode(reverse_head);

    Node* try = insert(head, 6);
    printNode(try);

    return 0;
}