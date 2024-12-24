#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void linkedlisttraversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element : %d\n", ptr->data);
        ptr = ptr->next;
    }
}

// case 1 :- deleting the first element from the linked list

/*struct node * deletefirst(struct node * head){
    struct node * ptr = head;
    head = head->next;
    free(ptr);
    return(head);

} */

// case 2 :- deleting at index from the linked list.

/* struct node * deleteAtIndex(struct node * head, int index){
  struct node *p = head;
  struct node *q = head->next;
  for ( int i = 0; i < index-1; i++)
  {
      p = p->next;
      q = q->next;
  }
  p->next = q->next;
  free(q);
  return head;
} */

// case 3 :- deleting the last node from the linked list.

/*struct node * deleteLastNode (struct node * head){
    struct node *p = head;
    struct node *q = head->next;
    while(q->next !=NULL){
        p = p->next;
        q = q->next;
    }
    p->next = NULL;
    free(q);
    return(head);
} */

// case 4 :- deleting the node at a given value from the linked list.

/*struct node * deleteAtValue (struct node * head, int value){
    struct node *p = head;
    struct node *q = head->next;
    while(q->data !=value && q->next != NULL){
        p = p->next;
        q = q->next;
    }
     if(q->data == value){
        p->next = q->next;
        free(q);
     }
     return head;
    } */

int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;

    // allocating memory in heap (dynamic memory allocation)
    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));

    // link first and second nodes
    head->data = 11;
    head->next = second;

    // link second and third nodes
    second->data = 12;
    second->next = third;

    // link third node and fourth node
    third->data = 66;
    third->next = fourth;

    // terminate the list at the fourth node
    fourth->data = 42;
    fourth->next = NULL;

    printf("linked list before deletion : \n");
    linkedlisttraversal(head);

    // head = deletefirst(head); //for deleting the first element in the linked list.

    //  head = deleteAtIndex(head,2); // for deleting the element from a linked list at a given index.

    //  head = deleteLastNode(head); // for deleting the last node from the given linked list.

    //   head = deleteAtValue(head,66); // for deleting the node with a given value from the linked list.

    printf("linked list after deletion :\n");
    linkedlisttraversal(head);

    return 0;
}