#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
}; 

void linkedlisttraversal (struct node*ptr){
    while (ptr != NULL)
    {
      printf("Element : %d\n", ptr->data);
      ptr = ptr->next;
    }
    
} 

struct node * insertatfirst(struct node *head, int data){
    struct node *ptr = (struct node*)malloc(sizeof(struct node));
    ptr -> next = head;
    ptr -> data = data;
    return ptr;
} 

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
    third->next = NULL; 
    
    linkedlisttraversal(head); 
    head = insertatfirst(head, 50);
    linkedlisttraversal(head);
    return 0;
}