#include "sort.h"

/**
 * quick_sort - quick sort implementation
 *
 * @array: array to be sorted
 * @size: size of the array
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;
	q_sort(array, 0, size - 1, size);
}

/**
 * partition - partition based on lumoto scheme
 *
 * @array: array to be sorted
 * @lo: low index of the partision
 * @hi: hi index of the partition
 * @size: size of the array
 * Return: index of the partition
 */
size_t partition(int *array, ssize_t lo, ssize_t hi, size_t size)
{
	ssize_t i, j;
	int pivot;

	pivot = array[hi];
	i = lo - 1;
	for (j = lo; j < hi; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			if (i != j)
			{
				swap_elements(&array[i], &array[j]);
				print_array(array, size);
			}
		}
	}
	if (array[hi] < array[i + 1])
	{
		swap_elements(&array[i + 1], &array[hi]);
		print_array(array, size);
	}
	return (i + 1);
}

/**
 * swap_elements - swaps elements b to a
 *
 * @a: element to be swapped to
 * @b: element to swap from
 */
void swap_elements(int *a, int *b)
{
	*a = *a ^ *b;
	*b = *a ^ *b;
	*a = *a ^ *b;
}

/**
 * q_sort - sub implementation of quick sort
 *
 * @array: array to be sorted
 * @lo: lo index to be sorted
 * @hi: hi index
 * @size: size of the array
 */
void q_sort(int *array, ssize_t lo, ssize_t hi, size_t size)
{
	ssize_t pivot;

	if (lo < hi)
	{
		pivot = partition(array, lo, hi, size);
		q_sort(array, lo, pivot - 1, size);
		q_sort(array, pivot + 1, hi, size);
	}
}
