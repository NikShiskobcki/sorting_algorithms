#include "sort.h"

/**
 * selection_sort - selection sort
 * @array: array
 * @size: size
 */
void selection_sort(int *array, size_t size)
{
	int i, j;
	int min, aux;

	for (i = 0; i < (int)size - 1; i++)
	{
		min = i;
		for (j = i + 1; j < (int)size; j++)
		{
			if (array[j] < array[min])
			{
				min = j;
			}
		}
		if (min != i)
		{
			aux = array[i];
			array[i] = array[min];
			array[min] = aux;
			print_array(array, size);
		}
	}
}
