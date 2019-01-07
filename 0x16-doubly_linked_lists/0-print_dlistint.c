#include "lists.h"
#include <unistd.h>

/**
 * print_dlistint - Prints member of each node
 *
 * @h: Pointer to the first node in SLL
 *
 * Return: qty (success) 0 (failure)
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *curr = h;
	size_t qty = 0;

	if (!curr)
		return (qty);

	while (curr)
	{
		printf("%d\n", curr->n);
		curr = curr->next;
		qty++;
	}

	return (qty);
}
