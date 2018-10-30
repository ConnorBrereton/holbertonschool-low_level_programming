#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * delete_nodeint_at_index - Deletes node anywhere in list
 *
 * @head: Pointer to first node
 * @index: Index to insert node at
 *
 * Return: 1 (success) -1 (fail)
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;

	listint_t *cur = *head;

	listint_t *jumper;

	if (!head)
		return (-1);

	if (index == 0)
	{
		*head = cur->next;
		free(cur);
		return (1);
	}

	for (i = 0; i < index - 1; i++)
	{
		cur = (cur == NULL || cur->next == NULL) ? NULL : cur->next;
	}

	jumper = cur->next->next;
	free(cur->next);
	cur->next = jumper;
	return (1);
}
