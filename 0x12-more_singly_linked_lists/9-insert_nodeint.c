#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *insert_nodeint_at_index - Inserts node anywhere in list
 *
 * @head: Pointer to first node
 * @idx: Index to insert node at
 * @n: Data to copy into node
 *
 * Return: Address of new node (success) NULL (fail)
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;

	listint_t *temp, *cur;

	cur = *head;

	if (!head)
		return (NULL);

	temp = malloc(sizeof(listint_t));
	if (!temp)
		return (NULL);

	temp->n = n;

	/* case: push */
	if (idx == 0)
	{
		temp->next = cur;
		*head = temp;
		return (temp);
	}

	/* case: general */
	for (i = 0; i < idx - 1; i++)
	{
		cur = (cur == NULL || cur->next == NULL) ? NULL : cur->next;
	}

	temp->next = cur->next;
	cur->next = temp;

	return (temp);
}
