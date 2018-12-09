#include "lists.h"

/**
 * dlistint_len - Returns number of elements in SLL
 *
 * @h: Pointer to the first node in SLL
 *
 * Return: qty (success) 0 (failure)
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *cur = h;
	size_t qty = 0;

	if (!cur)
		return (qty);

	while (cur)
	{
		qty++;
		cur = cur->next;
	}

	return (qty);
}
