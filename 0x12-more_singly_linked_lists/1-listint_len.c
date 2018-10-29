#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/** 
 * listint_len - Counts up number of nodes
 *
 * @h: pointer to the first node
 *
 * Return: count (success) 1 (fail)
 */

size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	if (h == NULL)
		return (1);

	while (h != NULL)
	{
		len++;
		h = h->next;
	}

	return (len);
}
