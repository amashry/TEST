#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	int data;
	struct node* next;
}node ; 

node* create_LL(int value)
{
 	node* head = (node*)malloc(sizeof(node));
	if(head != NULL){
		head->data = value;
		head->next = NULL;
	}
	return head;
}

node* prepend_LL(int value, node* head) //insert at beginning of linked list
{
	node* newnode = (node*)malloc(sizeof(node));
	if(newnode != NULL)
	{
		newnode->data = value;
		newnode->next = head;
		head = newnode;
	}
}

void append_LL(int value, node* head) //insert at end of linked list
{
	
	node* newnode = (node*)malloc(sizeof(node));
	newnode->data = value;
	
	node* temp = head;
	while(temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = newnode;
	newnode->next = NULL;

}

node* search_LL(node* head, int key)
{
	node* temp = head;
	while(temp != NULL)
	{
		if(temp->data == key)
		{
			break;
		}
		else
		{
		temp = temp->next;
		}
	}
	return temp;
}

void InsertAfter_LL(node* prev_node, int value)
{
	if(prev_node != NULL)
	{
	node* newnode = (node*)malloc(sizeof(node));
	if(newnode != NULL)
	{
		newnode->data = value;
		newnode->next = prev_node->next;
		prev_node->next = newnode;
	}
	
	}
	
}

void DeleteAfter_LL(node* prev_node)
{
	if(prev_node != NULL)
	{
		node* temp = prev_node->next;
		prev_node->next = temp->next;
		free(temp);
	}	
}

void swap(int* x,int* y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}


void sort_LL(node* head)
{
	node* ni;
	node* nj;
	for(ni=head; ni->next != NULL; ni=ni->next)
	{
		for(nj=ni->next; nj != NULL; nj=nj->next)
		{
			if(nj->data < ni->data)
			{
				swap(&(nj->data),&(ni->data));
			}
		}
	}		

}

void print_LL(node* head)
{
	printf("-----------------\n");
	node* temp = head;
	while(temp != NULL)
	{
		printf("%d\n",temp->data);
		temp = temp->next;
	}
	printf("-----------------\n");

}



/*****************************************************************************/
/*****************************************************************************/

/*double linked list*/



typedef struct node2
{
	int data;
	struct node2* next;
	struct node2* prev;
}node2 ; 

node2* create2_LL(int value)
{
 	node2* head = (node2*)malloc(sizeof(node2));
	if(head != NULL){
		head->data = value;
		head->next = NULL;
		head->prev = NULL;
	}
	return head;
}

node2* prepend2_LL(int value, node2* head) //insert at beginning of linked list
{
	node2* newnode = (node2*)malloc(sizeof(node2));
	if(newnode != NULL)
	{
		newnode->data = value;
		newnode->next = head;
		head->prev = newnode;
		newnode->prev = NULL;
		head = newnode;
	}
	return head;
}


void InsertAfter2_LL(node* prev_node, int value)
{
	if(prev_node != NULL)
	{
	node* newnode = (node*)malloc(sizeof(node));
	if(newnode != NULL)
	{
		newnode->data = value;
		newnode->next = prev_node->next;
		newnode->prev = prev_node;
		prev_node->next = newnode;
		newnode->next->prev = newnode;
	}
	
	}
	
}
