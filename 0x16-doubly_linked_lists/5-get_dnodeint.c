#include "lists.h"

/**
 * *get_dnodeint_at_index - Gets node at index
 *
 * @head: Pointer to node
 *
 * @index: Index of node to return
 *
 * Return: null (failure) cur (success)
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *cur = NULL;

	if (!head)
		return (NULL);

	cur = head;

	while (cur && index--)
		cur = cur->next;

	return (cur);
}
