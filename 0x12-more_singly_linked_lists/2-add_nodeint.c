#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *add_nodeint - Appends node at front
 *
 * @head: Pointer to first node
 * @n: Value to add to list
 *
 * Return: new node (success) NULL (fail)
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	if (head == NULL)
		return (NULL);

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = *head;
	*head = temp;

	return (*head);
}
