#include "lists.h"

/**
 * sum_dlistint - Computes sum of all node member values
 *
 * @head: Pointer to first node of DLL
 *
 * Return: 0 (failure) sum (success)
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	dlistint_t *cur = NULL;

	if (!head)
		return (sum);

	cur = head;

	while (cur)
	{
		sum += cur->n;
		cur = cur->next;
	}

	return (sum);
}
