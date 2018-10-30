#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_listint- Prints the nodes values in order
 *
 * @h: pointer to the first node
 *
 * Return: count (success) 1 (fail)
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	if (!h)
		return (1);

	while (h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}

	return (count);
}
