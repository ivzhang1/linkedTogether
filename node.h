#include <stdio.h>
#include <stdlib.h>

struct node {int i; struct node *next;};

void print_list(struct node * l_list);
struct node * insert_front(struct node * l_list, int addend);
struct node * free_list(struct node * l_list);
