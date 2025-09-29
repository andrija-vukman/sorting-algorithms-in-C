#include <stdio.h>
#include "sort.h"


void printArray(int *a, int n)
{
	int i;
	for (i = 0; i < (n-1); i++)
		printf("%d, ", a[i]);
	printf("%d\n\n", a[i]);
}

