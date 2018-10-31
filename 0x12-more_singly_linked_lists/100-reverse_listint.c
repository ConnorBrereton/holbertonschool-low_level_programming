#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *reverse_listint - Reverses a single linked list
 *
 * @head: Pointer to pointer to first node
 *
 * Return: First node (success) NULL (fail)
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *tail = NULL;
	listint_t *next = *head;

	if (!head || !*head)
		return (NULL);

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = tail;
		tail = (*head);
		*head = next;
	}
	*head = tail;
	return (*head);
}
