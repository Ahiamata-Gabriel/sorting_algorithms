#ifndef SORT_H
#define SORT_H
#include <stdlib.h>
#include <stdio.h>

void print_array(const int *array, size_t size);
void swap_elements(int *a, int *b);

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void bubble_sort(int *array, size_t size);
void print_list(const listint_t *list);
void insertion_sort_list(listint_t **list);
void insertion_sort_list(listint_t **list);
void shell_sort(int *array, size_t size);
void counting_sort(int *array, size_t size);
/*Selection sort*/
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
listint_t *create_listint(const int *array, size_t size);
size_t partition(int *array, ssize_t lo, ssize_t hi, size_t size);
void q_sort(int *array, ssize_t lo, ssize_t hi, size_t size);
void cocktail_sort_list(listint_t **list);
int linked_list_count(listint_t **list);
void swap_list_el(listint_t **list, listint_t *node);
void merge_sort(int *array, size_t size);
void merge_sort_recursive(int *arr, int *buff, size_t f, size_t b);
void merge_all(int *arr, int *buff, size_t f, size_t m, size_t b);
#endif
