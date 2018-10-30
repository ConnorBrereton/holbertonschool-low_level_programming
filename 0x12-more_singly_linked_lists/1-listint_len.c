#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * listint_len - Counts up number of nodes
 *
 * @h: Pointer to the first node
 *
 * Return: count (success) 0 (fail)
 */

size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		h = h->next;
		len++;
	}

	return (len);
}
