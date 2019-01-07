#include "lists.h"

/**
 * *add_dnodeint - Add node to front
 *
 * @head: Double pointer to first node
 *
 * @n: Integer member of new node
 *
 * Return: NULL (failure) newnode (success)
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	if (!head)
		return (NULL);

	newnode = malloc(sizeof(dlistint_t));
	if (!newnode)
		return (NULL);

	newnode->n = n;

	newnode->next = *head;

	if (*head) /* check if empty list */
		(*head)->prev = newnode;
	newnode->prev = NULL;

	*head = newnode;
	return (newnode);
}
