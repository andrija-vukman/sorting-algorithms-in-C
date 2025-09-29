#include <stdio.h>
#include "sort.h"


int cycleSort(int *a, int n)
{
	int cycle_start, pos;
	
	for (cycle_start = pos = 0; cycle_start < n-1; )
	{
		pos = cycle_start;			// großer wichtiger Fehler entdeckt!!! (2025-09-25) Wenn man dieses assignment in die 2te for-Schleife gibt, wird eine neue pos variable deklariert (überschattet)

		for (int i = cycle_start+1; i < n; i++)
		{
			if (a[cycle_start] > a[i])
			{
				pos++;
				printf("pos = %d\n", pos);
			}
		}

		printf("\n\tpos = %d, cycle start = %d\n", pos, cycle_start);
		if (pos == cycle_start)	
		{
			cycle_start++;
			break;
		}

		swap(a+cycle_start, a+pos);
	}
	
	return CYCLE_SORT;
}

