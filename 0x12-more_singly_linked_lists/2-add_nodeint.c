#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * listint_t - Appends node at front
 *
 * @head: Pointer to first node
 * @n: Value to add to list
 *
 * Return: new node (success) 1 (fail)
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
