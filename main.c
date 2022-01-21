#include <stdio.h>
#include <stdlib.h>
#include "LL.h"

/* matrix mul
void matrix_mul(int a[][3],int b[][3],int m[][3],int r, int c)
{ 
    for ( int i = 0 ; i < r ; i++ )
    {
      for ( int j = 0 ; j < c ; j++ )
      {
        for ( int k = 0 ; k < c ; k++ )
        {
          m[i][j] += a[i][k]*b[k][j];
        }
      }
    }

}
 
 
int main()
{
  int i, j, k;
  int first[3][3], second[3][3],multiply[3][3];
 
  printf("Enter the elements of first matrix\n");
 
  for (  i = 0 ; i < 3 ; i++ ){
	for ( j = 0 ; j < 3 ; j++ ){
		scanf("%d", &first[i][j]);
	}
  }

  printf("Enter the elements of second matrix\n");
 
    for ( i = 0 ; i < 3 ; i++ )
      for ( j = 0 ; j < 3 ; j++ )
        scanf("%d", &second[i][j]);
 
    for ( i = 0 ; i < 3 ; i++ )
    {
      for ( j = 0 ; j < 3 ; j++ )
      {
        for ( k = 0 ; k < 3 ; k++ )
        {
          multiply[i][j] += first[i][k]*second[k][j];
        }
      }
    }
 
    printf("Product of entered matrices:-\n");
 
    for ( i = 0 ; i < 3 ; i++ )
    {
      for ( j = 0 ; j < 3 ; j++ )
        printf("%d\t", multiply[i][j]);
 
      printf("\n");
    }
  }
 */
 
 
/* insertion and sorting test */
/*
 void main(void)
 {
	 int arr[]={30,40,50,20,5,6,2,100};
	 array_print(arr, array_sz(arr));
	 insertion_sort(arr, array_sz(arr));
	 array_print(arr, array_sz(arr));
 }
 */
 
 /******************************************************************************/
 /******************************************************************************/
 /******************************************************************************/

 
 
/* Linked List Applications */


 
void main(void)
{
node* head = create_LL(0);
	
head = prepend_LL(5, head);
head = prepend_LL(10, head);
print_LL(head);
append_LL(100, head);
append_LL(110, head);
append_LL(120, head);

print_LL(head);

sort_LL(head);
print_LL(head);


node* key = search_LL(head, 110);

if(key == NULL)
{
	printf("key not found\n");
}
else
{
	printf("key found\n");
}

DeleteAfter_LL(key);
print_LL(head);


}
 
 
 
 
 
 
 
 
 
 
 