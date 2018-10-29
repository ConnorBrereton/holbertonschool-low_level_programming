#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint- Prints the nodes values in order
 *
 * @h: pointer to the first node
 *
 * Return: count (success) 1 (fail)
 */

size_t print_listint(const listint_t *h)
{
	unsigned int count = 0;

	if (h == NULL)
		return (1);

	while (h != NULL)
	{
		if (h->n)
		{
			printf("%d\n", h->n);
			count++;
		}

		else
		{
			printf("%s\n", "NULL");
		}

		h = h->next;
	}
	return (count);
}
