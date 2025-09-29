#include <stdio.h>
#include "sort.h"


int findElement(int *a, int n, int type)
{
	struct element
	{
		int val;
		int pos;
	};
	
	if (type == SMALLEST)
	{
		struct element smallest;
	
		int i = 0;
		for (smallest.val = a[i], smallest.pos = i; i < n; i++)
			if (a[i] < smallest.val)
			{
				smallest.val = a[i];
				smallest.pos = i;
			}
	
		return smallest.pos;
	}
	else if (type == LARGEST)
	{
		struct element largest;
	
		int i = 0;
		for (largest.val = a[i], largest.pos = i; i < n; i++)
			if (a[i] > largest.val)
			{
				largest.val = a[i];
				largest.pos = i;
			}
	
		return largest.pos;
	}

	printf("fatal error: no element in findElement() found...\n");
	return -1;
}


