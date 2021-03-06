#include "lists.h"

/**
 * *insert_dnodeint_at_index - Insert newnode at given index
 *
 * @h: Double pointer to the first node of DLL
 *
 * @idx: Index to insert node at
 *
 * @n: Member of node that contains the integer
 *
 * Return: NULL (failure) newnode (success)
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *cur, *newnode;

	cur = *h;

	if (idx == 0)
		return (add_dnodeint(h, n));

	if (!cur)
		return (NULL);

	while (cur->next && idx-- > 1) /* move to node before idx */
		cur = cur->next;

	if (idx > 1) /* case: idx > size DLL */
		return (NULL);

	newnode = malloc(sizeof(dlistint_t));
	if (!newnode)
		return (NULL);

	newnode->n = n;
	newnode->next = cur->next;
	newnode->prev = cur;
	cur->next = newnode;

	if (newnode->next)
		newnode->next->prev = newnode;

	return (newnode);
}
