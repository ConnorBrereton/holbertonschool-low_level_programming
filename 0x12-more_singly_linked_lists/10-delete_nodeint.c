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
	unsigned int i = 0;

	listint_t *cur = *head;

	listint_t *jumper;

	if (!cur)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(cur);
		return (1);
	}

	while (i < index - 1)
	{
		/* check 2nd to last node */
		if (cur->next == NULL)
			return (-1);

		i++;
		cur = cur->next;
	}

	/* jumper gets set to the deletion node */
	jumper = cur->next;
	cur->next = jumper->next;
	free(jumper);

	return (1);
}
