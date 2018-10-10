#include <stdio.h>
#include <stdlib.h>
#include "node.h"

int main(){


  struct node test_1;
  test_1.i = 10;
  test_1.next = NULL;
  struct node * p_test_1 = &test_1;
    
  p_test_1 = insert_front(p_test_1, 6);
  p_test_1 = insert_front(p_test_1, 1);
  p_test_1 = insert_front(p_test_1, 21);
  p_test_1 = insert_front(p_test_1, 10);


  printf("PRINTING OUT INTs of Linked List with [10, 21, 1, 6, 10]\n");
  print_list(p_test_1);
  printf("\n");

  printf("Adding 10\n");
  p_test_1 = insert_front(p_test_1, 10);
  print_list(p_test_1);
  printf("\n");

  printf("CLEARING Linked List\n");
  p_test_1 = free_list(p_test_1);

  print_list(p_test_1);
  printf("\n");
  
  return 0;
}
