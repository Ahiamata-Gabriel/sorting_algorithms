#include "sort.h"

/**
 * insertion_sort_list - inserts into a list while sorting
 *
 * @list: pointer to the linked list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *hptr, *next;

	if (list == NULL || *list == NULL)
		return;

	hptr = (*list)->next;

	while (hptr != NULL)
	{
		next = hptr->next;
		while (hptr->prev != NULL && hptr->prev->n > hptr->n)
		{
			hptr->prev->next = hptr->next;
			if (hptr->next != NULL)
				hptr->next->prev = hptr->prev;
			hptr->next = hptr->prev;
			hptr->prev = hptr->next->prev;
			hptr->next->prev = hptr;
			if (hptr->prev == NULL)
				*list = hptr;
			else
				hptr->prev->next = hptr;
			print_list(*list);
		}
		hptr = next;
	}
}
