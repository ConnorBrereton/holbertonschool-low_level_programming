#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *cur, *del;

	if (!*head)
		return (-1);

	cur = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		(*head)->prev = NULL;
		free(cur);
		return (1);
	}

	while (cur->next && index-- > 1)
		cur = cur->next;

	if (index > 1 || cur->next == NULL)
		return (-1);

	del = cur->next; /* set to node to delete */
	cur->next = del->next;

	if (cur->next != NULL)
		cur->next->prev = cur;

	free(del);
	return (1);
}
