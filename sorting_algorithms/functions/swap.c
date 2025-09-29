#include <stdio.h>
#include "sort.h"


void swap(int *a, int *b)
{
	if (*a == *b)
		return;


	printf("swapping %d and %d...\n", *a, *b);

	int temp = *a;
	*a = *b;
	*b = temp;
}

