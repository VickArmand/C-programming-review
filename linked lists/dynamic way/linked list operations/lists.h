#ifndef LISTS
#define LISTS
#include <stdio.h>
#include <stdlib.h>
typedef struct node {
    int value;
    struct node *ptr_next;
}node_x;
node_x *head;

void print_list();
void add_last_node(int);
void add_first_node(int);
void delete_last_node();
void delete_first_node();
void add_node(int,int);
void delete_node(int);
#endif