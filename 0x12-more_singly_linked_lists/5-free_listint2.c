#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint2 - Free linked list and set head
 * to NULL at the end
 *
 * @head: Pointer to first node
 *
 * Return: none
 */

void free_listint2(listint_t **head)
{
	listint_t *cur = *head;
	listint_t *nxt;

	if (head == NULL || *head == NULL)
		return;

	while (cur != NULL)
	{
		/* set ahead to avoid segfault */
		nxt = cur->next;

		/* free the current node */
		free(cur);

		/* update position */
		cur = nxt;
	}
	*head = NULL;
}
