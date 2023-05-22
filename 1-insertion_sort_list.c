/**
 *insertion_sort_list-  Sorts a list through insertion sort
 *
 *@list: the list we use
 *
 *Return: Returns nothing
 */

#include "sort.h"

void insertion_sort_list(listint_t **list)
{
	listint_t *current, *tmp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	current = (*list)->next;

	while (current != NULL)
	{
		while (current->prev != NULL && current->n < current->prev->n)
		{
			tmp = current->prev;

			if (current->next != NULL)
				current->next->prev = tmp;
			tmp->next = current->next;
			current->next = tmp;

			if (tmp->prev != NULL)
				tmp->prev->next = current;
			current->prev = tmp->prev;
			tmp->prev = current;

			if (current->prev == NULL)
				*list = current;

			print_list(*list);
		}
		current = current->next;
	}
}

