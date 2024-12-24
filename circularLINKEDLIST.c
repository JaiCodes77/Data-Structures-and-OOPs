#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
}; 

void linkedlisttraversal(struct node * head) 
{
struct node *ptr = head;
do {
    printf("elemnt is %d\n", ptr -> data);
    ptr = ptr -> next; 
}while(ptr!=head);

};


int main()
{
    struct node *head;
    struct node *second;
    struct node *third;

    // allocating memory in heap (dynamic memory allocation)
    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));

    // link first and second nodes
    head->data = 11;
    head->next = second;

    // link second and third nodes
    second->data = 12;
    second->next = third;

    // terminate the list at third node
    third->data = 66;
    third->next = head; 
    
    linkedlisttraversal(head);
    return 0;
}