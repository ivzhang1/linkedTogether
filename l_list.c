#include <stdio.h>
#include <stdlib.h>
#include "node.h"

void print_list(struct node * l_list){
  while(l_list){
    printf("%d\n", l_list->i);
    l_list = l_list -> next;
  }
};
struct node * insert_front(struct node * l_list, int addend){
  struct node *new;

  new = malloc(sizeof(l_list));
  new->i = addend;
  new->next = l_list;

  return new;
  
  
}

struct node * free_list(struct node * l_list){
  struct node *prev = l_list;
  struct node *curr = l_list;
  
  while(prev->next){
    free(prev);
    prev = curr;
    curr = curr->next;
  }
  
  return l_list;
  
}
