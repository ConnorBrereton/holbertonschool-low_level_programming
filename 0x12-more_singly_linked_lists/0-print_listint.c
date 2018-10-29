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

	const listint_t *head = h;

	if (head == NULL)
		return (1);

	while (head != NULL)
	{
		if (head->n)
		{
			printf("%d\n", head->n);
			count++;
		}

		else
		{
			printf("%s\n", "NULL");
		}

		head = head->next;
	}
	return (count);
}
