#include <stdio.h>
#include <stdlib.h>
#include "node.h"

void print_list(struct node * l_list){
  while(l_list -> next){
    printf("%d\n", l_list->i);
    l_list = l_list -> next;
  }
};
struct node * insert_front(struct node * l_list, int addend){
  struct node *new;
  l_list->i = addend;
  l_list->next = new;
  new = l_list;

  return l_list;
  
  
};
struct node * free_list(struct node * l_list){
  struct node *temp = l_list->next;
  struct node *prev = l_list;

  while(temp -> next){

    temp = l_list -> next;
    prev = l_list;
    free(prev);
  }

  return temp;
}
