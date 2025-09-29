#include <stdio.h>
#include "sort.h"


int selectionSort(int *a, int n)
{
	int i = 0; 
	int smallest;

	while (i < n)
	{
		smallest = i + findElement(a+i, n-i, SMALLEST);
		swap(a+i, a+smallest);
		i++;
	}

	return SELECTION_SORT;
}


