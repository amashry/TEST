#include <stdio.h>
#include "algorithms.h"

int main()
{
   int array[100], search, c, n, position;
 
   printf("Enter the number of elements in array\n");
   scanf("%d",&n);
 
   printf("Enter %d numbers\n", n);
 
   for ( c = 0 ; c < n ; c++ )
      scanf("%d",&array[c]);
 
   printf("Enter the number to search for\n");
   scanf("%d",&search);
 
   position = Binary_search(array, n, search);
 
   if ( position == -1 )
      printf("%d is not present in array.\n", search);
   else
      printf("%d is present at location %d.\n", search, position+1);
 
} 
