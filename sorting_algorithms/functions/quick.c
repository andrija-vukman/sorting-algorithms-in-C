#include <stdio.h>
#include "sort.h"


int quickSort(int *a, int n)
{
	int res, pivot;
	res = QUICK_SORT;

	pivot = findNewPivot(a, n);

	if (n <= 2)
		return QUICK_SORT;
	
	res = quickSort(a, pivot);
	res = quickSort(a+pivot, n-pivot);

	return res;
}


int findNewPivot(int *a, int n) 
{
	int i, j;

	for (i = -1, j = 0; j < n; j++)
		if (a[j] < a[n-1])
		{
			++i;
			swap(a+i, a+j);
		}
	++i;
	swap(a+i, a+n-1);
	
	return i;
}
