#include "sort.h"

/**
 * shell_sort - sorts an array of integers in ascending order
 * using knuth sequence
 *
 * @array: array to sort
 * @size: size of the array to sort
 */
void shell_sort(int *array, size_t size)
{
	size_t i, h, j;
	int k;

	if (array == NULL || size < 2)
		return;
	h = 1;
	while (h < size / 3)
	{
		h = 3 * h + 1;
	}
	while (h > 0)
	{
		for (i = h; i < size; i++)
		{
			k = array[i];
			for (j = i; j >= h && array[j - h] > k; j -= h)
			{
				array[j] = array[j - h];
			}
			array[j] = k;
		}
		h = (h - 1) / 3;
		print_array(array, size);
	}

}
