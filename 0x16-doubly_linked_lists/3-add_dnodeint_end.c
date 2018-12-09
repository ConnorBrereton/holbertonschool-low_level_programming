#include "lists.h"

/**
 * *add_dnodeint_end - Insert node at end of DLL
 *
 * @head: Double pointer to first node
 *
 * @n: Node member that has int
 *
 * Return: NULL (failure) newnode (success)
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *cur, *newnode;

	newnode = malloc(sizeof(dlistint_t));
	if (!newnode)
		return (NULL);

	newnode->n = n;
	cur = *head;

	if (cur)
		while (cur->next) /* get to end of DLL */
			cur = cur->next;

	newnode->prev = cur;
	newnode->next = NULL;

	if (cur)
		cur->next = newnode;
	else
		*head = newnode;

	return (newnode);
}
