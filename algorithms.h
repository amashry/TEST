#ifndef _ALGORITHMS_H_
#define _ALGORITHMS_H_

/* Linked List Node Creation */
typedef struct node
{
	int data;
	struct node* next;
}; 

node* create_LL(int value);


int linear_search(int *pointer, int n, int find);
int Binary_search(int *pointer, int n, int find);

void bubble_sort(int* arr, int size);
void selection_sort(int* arr, int size);
void insertion_sort(int* arr, int size);

#endif

