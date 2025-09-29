#include <stdio.h>
#include "sort.h"
// &a[last] = &a[first] + numberOfElements-1


int insertionSort(int *a, int n)
{
	int *source, *target, *max;
	
	max = a+n-1;
	for (source = a+1; source <= max; source++)
	{
		for (target = a; target < source && *target < *source; target++)
			;
		insertNumber(target, source);
	}
	return INSERTION_SORT;
}


void insertNumber(int* target, int* source)
{
	int number;
	number = *source;

	while (source > target)
	{
		*(source) = *(source-1);
		--source;
	}
	*target = number;
}
