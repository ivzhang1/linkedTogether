#include <stdio.h>
#include <stdlib.h>
#include "node.h"

int main(){
  struct node test_1;
  test_1.i = 10;
  struct node test_2;
  test_2.i = 1;
  struct node test_3;
  test_3.i = 21;
  struct node test_4;
  test_4.i = 0;
  struct node test_5;
  test_5.i = -1;
  struct node test_6;
  test_6.i = 6;

  struct node * p_test_1 = &test_1;

  test_1.next = &test_2; 
  test_2.next = &test_3; 
  test_3.next = &test_4; 
  test_4.next = &test_5; 
  test_5.next = &test_6; 
  test_6.next = NULL;

  printf("PRINTING OUT INTs of Linked List with [10, 1, 21, 0, -1, 6]\n");
  print_list(p_test_1);
  printf("\n");

  printf("Adding 10\n");
  p_test_1 = insert_front(p_test_1, 10);
  //free_list(p_test_1);
  print_list(p_test_1);
  printf("\n");
  
  return 0;
}
