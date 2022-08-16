#include "sort.h"

/**
 * cocktail_sort_list - sorts a doubly linked list
 * using the cocktail shaker sort
 *
 * @list: doubly linked list
 */
void cocktail_sort_list(listint_t **list)
{
	listint_t *lptr;
	int flag = 1;

	if (list == NULL || *list == NULL)
		return;
	lptr = *list;
	while (flag != 0)
	{
		flag = 0;
		while (lptr->next != NULL)
		{
			if (lptr->next->n < lptr->n)
			{
				swap_list_el(list, lptr);
				flag = 1;
				print_list(*list);
			}
			else
				lptr = lptr->next;

		}
		if (flag == 0)
			break;
		flag = 0;
		while (lptr->prev != NULL)
		{
			if (lptr->prev->n > lptr->n)
			{
				swap_list_el(list, lptr->prev);
				flag = 1;
				print_list(*list);
			}
			else
				lptr = lptr->prev;
		}
	}
}


/**
 * swap_list_el - swaps element of node list
 *
 * @list: address of element 1
 * @node: address of element 2
 */
void swap_list_el(listint_t **list, listint_t *node)
{
	node->next->prev = node->prev;
	if (node->prev)
		node->prev->next = node->next;
	else
		*list = node->next;
	node->prev = node->next;
	node->next = node->next->next;
	node->prev->next = node;
	if (node->next)
		node->next->prev = node;
}
