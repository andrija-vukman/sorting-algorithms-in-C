#include <stdio.h>
#include "sort.h"

#define BUFFER 5

int main()
{
	int a[BUFFER] = { 3, 2, 4, 1, 5 };
	int res = 0;

	printf("Original: \n");
	printArray(a, BUFFER);


	res = selectionSort(a, BUFFER);

	printf("Selection Sort: \n");
	printArray(a, BUFFER);


	res = bubbleSort(a, BUFFER);

	printf("Bubble Sort: \n");
	printArray(a, BUFFER);


	res = insertionSort(a, BUFFER);
	
	printf("Insertion Sort: \n");
	printArray(a, BUFFER);


	res = mergeSort(a, BUFFER);
	
	printf("Merge Sort: \n");
	printArray(a, BUFFER);


	res = quickSort(a, BUFFER);
	
	printf("Quick Sort: \n");
	printArray(a, BUFFER);
	

	res = heapSort(a, BUFFER);
	
	printf("Heap Sort: \n");
	printArray(a, BUFFER);
	return res;


	res = cycleSort(a, BUFFER);
	
	printf("Cycle Sort: \n");
	printArray(a, BUFFER);


	return res;
}
