#include "sort.h"

/**
 *
 *
 *
 */
void quick_sort(int *array, size_t size)
{
	
	aux(array, size, 0, size - 1);
}

/**
 *
 *
 */
void aux(int *array, size_t size, int low, int high)
{
	int x;
	if (low < high)
	{
		x = lomutoPartition(array, size, low, high);
		aux(array, size, low, x - 1);
		aux(array, size, x + 1, high);
	}

}

/**
 *
 *
 */
size_t lomutoPartition(int *array, size_t size, int low, int high)
{
	int pivot, i, j, n;

	pivot = array[high];
	i = low - 1;
	for (j = low; j < high; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			n = array[i];
			array[i] = array[j];
			array[j] = n;
			if (array[i] != array[j])
				print_array(array, size);
		}

	}
	n = array[i + 1];
	array[i + 1] = array[high];
	array[high] = n;
	if (array[++i] != array[high])
		print_array(array, size);
	return (i);
}
