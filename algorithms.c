#include<stdio.h>

int linear_search(int *pointer, int n, int find)
{
   int c;
 
   for ( c = 0 ; c < n ; c++ )
   {
      if ( *(pointer+c) == find )
         return c;
   }
 
   return -1;
}

int Binary_search(int *pointer, int n, int find)
{
	int start = 0;
	int end = n-1;
	int mid;
	
	while (start <= end)
	{
		mid = (start + end)/2;
		if(*(pointer+mid)==find)
		{
			return mid;
		}
		if(*(pointer+mid)<find)
		{
			start = mid+1;
		}
		if(*(pointer+mid)>find)
		{
			end = mid-1;
		}
	}
	return -1;
}

void swap(int*x,int*y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}
void bubble_sort(int* arr, int size)
{
	for(int i=0; i<size-1; ++i)
	{
		for(int j=0; j<size-1-i; ++j)
		{
			if(arr[j] > arr[j+1])
			{
				swap(&arr[j], &arr[j+1]);
			}
		}
	}
}

void selection_sort(int* arr, int size)
{
	int min;
	for(int i=0; i<size-1; ++i)
	{
		min = i;
		for(int j=i+1; j<size; ++j)
		{
			if (arr[j] < arr[min])
			{
				min = j;
			}
		}
	swap(&arr[i], &arr[min]);
	}
}

void insertion_sort(int* arr, int size)
{
    int temp;
    for (int i=1 ; i<size ; i++) 
	{
        temp = arr[i];
        int j = i-1;
		
        while (j >= 0 && arr[j] > temp) 
		{
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }
}