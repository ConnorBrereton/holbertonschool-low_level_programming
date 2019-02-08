#include "sort.h"

/**
 * insertion_sort_list - Runs insertion sort on a double linked list.
 *
 * @list: Double pointer to our DLL
 *
 * Return: none (void function)
 */

void insertion_sort_list(listint_t **list)
{

	listint_t *current, *next;

	if (!list || !*list)
		return;

	current = (*list)->next;

	while (current != NULL) /* pivot node */
	{

		next = current->next; /* set to second node */

		while (current->prev != NULL && current->prev->n > current->n)
		{
			current->prev->next = current->next; /* prev->next from middle position */

			if (current->next != NULL)
				current->next->prev = current->prev; /* next->prev from middle position */

			current->next = current->prev; /* move node before prev node */
			current->prev = current->next->prev; /* move node before prev node */
			current->next->prev = current; /* link next with current node */

			if (current->prev == NULL)
				*list = current;

			if (current->prev != NULL)
				current->prev->next = current;
			print_list(*list);
		}
		current = next;
	}
}
