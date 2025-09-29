#include <stdio.h>
#include "sort.h"

#define L_CHILD (2*j)+1
#define R_CHILD (2*j)+2


int heapSort(int *a, int n)
{
	maxHeap(a, n);
	popHeap(a, n);
	printArray(a, n);
	
	return HEAP_SORT;
}


void maxHeap(int *a, int n)
{
	printHeap(a, n);

	int last_n_leaf_i;
	last_n_leaf_i = (n/2)-1;

	heapify(a, n, last_n_leaf_i);
	
	printHeap(a, n);
}


void heapify(int *a, int n, int i)
{
	int test, j;
	int parent, child;

	for (test = i; i >= 0; i--)
	{
		j = i;
		
		if (test == i && R_CHILD >= n)
			(child = L_CHILD);
		else
			(a[L_CHILD] > a[R_CHILD]) ? (child = L_CHILD) : (child = R_CHILD);

		for (parent = i; child < n && a[parent] < a[child]; )
		{
			swap(a+parent, a+child);

			parent = j = child;		// get new parent
			if (R_CHILD >= n)		// get new child
				(child = L_CHILD);
			else
				(a[L_CHILD] > a[R_CHILD]) ? (child = L_CHILD) : (child = R_CHILD);
				
		}
	}
}


void popHeap(int *a, int n)
{
	while (n > 1)
	{
		swap(a, a+n-1);
		heapify(a, --n, 0);
		printHeap(a, n);
	}
}


int findLevel(int type, int n, int level)
{
	int element, level_count;
	for (element = level_count = 0; 2*element+1 < n; level_count++)
	{
		printf("\t element = %d\n", element);
		printf("\t level count = %d\n\n", level_count);

		if (level_count == level)
			break;
		element = 2*element+1;
	}

	switch (type)
	{
	case AMOUNT:
		return ++level_count;		// ++ is dependent if you want the amount of levels or the last level index ;)
		break;
	case ELEMENT:
		return element;
		break;
	default:
		return -1;
		break;
	}
}


void printHeap(int *a, int n)
{
	int i, j;

	for (j = i = 0; j < n; i = 2*i+1)
	{
		for (j = i; j < 2*i+1 && j < n; j++)
			printf("%d, ", a[j]);
		printf("\n");
	}
	printf("\n\n");
}

int binpow(int base, int exponent)
{
	int res;
	for (res = 1; exponent > 0; exponent--)
		res = res*base;
	
	return res;
}




/*	
	for (level = nlevels-1; level > 0; level--)
	{
		child = findLevel(ELEMENT, n, level);

		for (i = binpow(2, level-1); i > 0; i--)
		{
			if (child >= n)
				break;

			parent = (child-1) / 2;
			if (child+1 < n && a[parent] < a[child+1])
				swap(a+child+1, a+parent);
			if (a[parent] < a[child])
				swap(a+child, a+parent);
			if (child+1 < n && a[child] < a[child+1])
				swap(a+child, a+child+1);

			child += 2;
		}
	}
*/
