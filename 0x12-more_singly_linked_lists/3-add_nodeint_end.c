#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *add_nodeint_end - Appends node to the end of linked list
 *
 * @head: Pointer to the start of the linked list
 *
 * @n: Data to be copied to the new node
 *
 * Return: address (success) NULL (fail)
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *end;

	if (head == NULL)
		return (NULL);

	end = *head;

	/* find last node */
	if (end != NULL)
		while (end->next != NULL)
			end = end->next;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);

	temp->n = n;

	/* case: single node */
	if (*head == NULL)
	{
		*head = temp;
		temp->next = NULL;
	}

	/* case: many node */
	else
	{
		end->next = temp;
		temp->next = NULL;
	}

	return (temp);
}
