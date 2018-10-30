#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_listint- Prints the nodes values in order
 *
 * @h: pointer to the first node
 *
 * Return: count (success) 0 (fail)
 */

size_t print_listint(const listint_t *h)
{
	size_t count;

	if (h == NULL)
		return (0);

	for (count = 0; h != NULL; h = h->next, count++)
		printf("%d\n", h->n);

	return (count);
}
