#include <stdio.h>
#ifndef _LL_H_
#define _LL_H_

typedef struct node node; 

node* create_LL(int value);

node* prepend_LL(int value, node* head); //insert at beginning of linked list

void append_LL(int value, node* head);	 //insert at end of linked list

node* search_LL(node* head, int key); 

void InsertAfter_LL(node* prev_node, int value);

void DeleteAfter_LL(node* prev_node);

void swap(int* x,int* y);

void sort_LL(node* head);

void print_LL(node* head);

#endif