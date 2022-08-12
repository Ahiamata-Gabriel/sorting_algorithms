#include "sort.h"
/*
 * bubble_sort - implementation of bubble sort
 *
 * @array: array to be sorted
 * @size: size of array to be sorted
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j, swap;

	size_t ar_length = size;

	if (!array || size == 0)
		return;
	for (i = 0; i < ar_length - 1; i++)
	{
		swap = 0;
		for (j = 0; j < ar_length - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				array[j] = array[j] ^ array[j + 1];
				array[j + 1] = array[j] ^ array[j + 1];
				array[j] = array[j] ^ array[j + 1];
				swap = 1;
				print_array(array, size);
			}
		}
		if (swap == 0)
			break;
		print_array(array, size);
	}
}

