#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint2 - Free linked list and set head
 * to NULL at the end
 *
 * @head: Pointer to pointer that points to first node
 *
 * Return: none
 */

void free_listint2(listint_t **head)
{
	listint_t *nxt;

	if (head == NULL || *head == NULL)
		return;

	/* set nxt +1 and delete head which is nxt - 1 */
	for (nxt = (*head)->next; *head != NULL; *head = nxt)
	{
		nxt = (*head)->next;
		free(*head);
	}
}
