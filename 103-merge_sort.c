#include "sort.h"

/**
 * merge_sort - merge sort function
 *
 * @array: array to be sorted
 * @size: size of the array
 */
void merge_sort(int *array, size_t size)
{
	int *buff;

	if (size < 2 || array == NULL)
		return;

	buff = malloc(sizeof(int) * size);
	if (!buff)
		return;

	merge_sort_recursive(array, buff, 0, size);
	free(buff);
}

/**
 * merge_sort_recursive - sorts merge sort recursively
 *
 * @arr: array
 * @buff: buffer
 * @f: front
 * @b: back
 */
void merge_sort_recursive(int *arr, int *buff, size_t f, size_t b)
{
	size_t m;

	if (b - f > 1)
	{
		m = f + (b - f) / 2;
		merge_sort_recursive(arr, buff, f, m);
		merge_sort_recursive(arr, buff, m, b);
		merge_all(arr, buff, f, m, b);
	}
}

/**
 * merge_all - merges all parts of the data
 *
 * @arr: array
 * @buff: buffer
 * @f: front
 * @m: middle
 * @b: back
 */
void merge_all(int *arr, int *buff, size_t f, size_t m, size_t b)
{
	size_t i, j, k = 0;

	printf("Merging...\n[left]: ");
	print_array(arr + f, m - f);

	printf("[right]: ");
	print_array(arr + m, b - m);

	for (i = f, j = m; i < m && j < b; k++)
		buff[k] = (arr[i] < arr[j]) ? arr[i++] : arr[j++];
	for (; i < m; i++)
		buff[k++] = arr[i];
	for (; j < b; j++)
		buff[k++] = arr[j];
	for (i = f, k = 0; i < b; i++)
		arr[i] = buff[k++];

	printf("[Done]: ");
	print_array(arr + f, b - f);
}
