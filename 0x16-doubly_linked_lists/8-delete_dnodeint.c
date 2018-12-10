#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes node at an index
 *
 * @head: Double pointer to first node in DLL
 *
 * @index: Index to ID node
 *
 * Return: -1 (failure) 1 (success)
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

	if (index > 1 || !(cur->next))
		return (-1);

	del = cur->next; /* set to node to delete */
	cur->next = del->next;

	if (cur->next)
		cur->next->prev = cur;

	free(del);
	return (1);
}
