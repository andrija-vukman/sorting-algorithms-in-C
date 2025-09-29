#include <stdio.h>
#include "sort.h"


int bubbleSort(int *a, int n)
{
	int i, largest;

	for (i = n; i > 0; i--)
	{
		largest = findElement(a, i, LARGEST);
		if (largest == -1)
			printf("fatal error: no element in findElement() found...");
		if (largest != (i-1))
			for (; largest < (i-1); largest++)
				swap(a+largest, a+(largest+1));
	}

	return BUBBLE_SORT;
}
