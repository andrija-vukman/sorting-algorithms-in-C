#include <stdio.h>
#include "sort.h"
#define BUFFER 5


int mergeSort(int *a, int n)
{
	printArray(a, n);
	int res = MERGE_SORT;
	int i, j, k, n1, n2;

	n1 = n/2;
	n2 = n/2;
	if (n % 2 != 0)
		n2++;
	
	int sa1[n1], sa2[n2];

	i = 0;
	for (j = 0; j < n1; j++)
	{
		printf("i = %d\n", i);
		sa1[j] = a[i++];
	}
	printf("\n");
	for (k = 0; k < n2; k++)
	{
		printf("i = %d\n", i);
		sa2[k] = a[i++];
	}
	
	printf("after initializing...\n");
	printArray(sa1, n1);
	printArray(sa2, n2);

	if (n1 > 1)
		res = mergeSort(sa1, n1);
	if (n2 > 1)
		res = mergeSort(sa2, n2);

	i = j = k = 0;
	while (j < n1 && k < n2)
		if (sa1[j] < sa2[k])
		{
			printf("left: a[i] = sa[j] = %d[%d]\n", sa1[j], j);
			a[i++] = sa1[j++];
		}
		else
		{
			printf("right: a[i] = sa2[k] = %d[%d]\n", sa2[k], k);
			a[i++] = sa2[k++];
		}

	while (j < n1)
		a[i++] = sa1[j++];
	while (k < n2)
		a[i++] = sa2[k++];
	printf("\n\n\n");
	return res;
}

