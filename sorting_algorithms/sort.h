#ifndef SORT

#define SORT

#define SMALLEST 1
#define LARGEST 2
#define INSERT 3

#define AMOUNT 1
#define ELEMENT 2
#define NO_LEVEL -1

#define SELECTION_SORT 1
#define BUBBLE_SORT 2
#define INSERTION_SORT 3
#define MERGE_SORT 4
#define QUICK_SORT 5
#define HEAP_SORT 6
#define CYCLE_SORT 7

/*

a sorting algorithm is either comparison-based or non-comparison-based

in-place (algorithm) sorting:
	not using extra space for manipulating
	may require small extra space for operation

internal sorting:
	not using extra space at all

external sorting:
	requires extra data memory
	data doesn't fit into main memory (RAM) and must be sent to external memory
	
stable algorithm sorting:
	useful when two same items appear in the same order in sorted array as in original array

hybrid algorithm sorting:
	combines two or more standard sorting algorithms to optimize performace

*/

// FUNCTIONS:

int selectionSort(int *array, int num);
int bubbleSort(int *array, int num);
int insertionSort(int *array, int num);
int mergeSort(int *array, int num);
int quickSort(int *array, int num);
int heapSort(int *array, int num);
int cycleSort(int *array, int num);

void swap(int *a, int *b);
void printArray(int *a, int num);
void printHeap(int *a, int num);
int binpow(int base, int exponent);

int findElement(int *a, int num, int type);
void insertNumber(int* target, int* source);
int findNewPivot(int *a, int num);
int findLevel(int type, int num, int level_if_there_yet);
void maxHeap(int *a, int num);
void heapify(int *a, int num, int last_non_leaf_element);
void popHeap(int *a, int num);

#endif
