#include "sort.h"

/**
 * selection_sort - selection sort implementation
 *
 * @array: array to be sorted
 * @size: size of the array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min;

	for (i = 0; i < size - 1; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
				min = j;
		}
		if (min != i)
		{
			array[i] = array[i] ^ array[min];
			array[min] = array[i] ^ array[min];
			array[i] = array[i] ^ array[min];
			print_array(array, size);
		}
	}
}
