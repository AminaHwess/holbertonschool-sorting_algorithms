#include "sort.h"

/**
* insertion_sort_list - function that sorts a doubly linked list of
* integers in ascending order
* @list: ptr
*/

void insertion_sort_list(listint_t **list)
{
	listint_t *tmp = *list, *swap, *head;

	head = *list;
	while (head)
	{
		tmp = head;
		while (tmp->prev && tmp->prev->n > tmp->n)
		{
			swap = tmp->prev;

			tmp->prev = swap->prev;
			swap->next = tmp->next;
			if (tmp->prev)
				tmp->prev->next = tmp;
			swap->prev = tmp;
			tmp->next = swap;
			if (swap->next)
				swap->next->prev = swap;
			if (!tmp->prev)
				*list = tmp;
			tmp = swap->prev;
			print_list(*list);
		}
		head = head->next;
	}
}
