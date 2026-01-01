#include <stdio.h>
#include <stdlib.h>

typedef struct node{
  int value;
  struct node *next;
} node;

int main() {

  //creating a linked list(each node is 16 bytes where value is 4 bytes and a pointer is 12 bytes)  
  node *first = (node *)malloc(sizeof(node));
  first->value=1;

  node *second = (node *)malloc(sizeof(node));
  second->value=2;
  first->next=second;
       
  node *third = (node *)malloc(sizeof(node));
  third->value=3;
  second->next=third;
  
  //printing out the values of a linked list
  node *temp = first;
  while(temp!=NULL){
    printf("%d\n", temp->value);
    temp = temp->next;
  }  
  return 0;
}
