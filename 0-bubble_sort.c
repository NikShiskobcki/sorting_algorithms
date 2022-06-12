#include "sort.h"

/**
 * bubble_sort - bubble sort
 * @array: array
 * @size: size
 */
void bubble_sort(int *array, size_t size)
{
	int x, y, aux;

	for (x = 0; x < ((int)size - 1); x++)
	{
		for (y = 0; y < ((int)size - x - 1); y++)
		{
			if (array[y] > array[y + 1])
			{
				aux = array[y];
				array[y] = array[y + 1];
				array[y + 1] = aux;
				print_array(array, size);
			}
		}
	}
}
