#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * list_len - prints the number of
 * nodes in the linked liss
 *
 * @h: pointer to struct
 *
 * Return: count (success) 1 (fail)
 */

size_t list_len(const list_t *h)
{
	unsigned int count = 0;

	const list_t *head = h;

	if (head == NULL)
		return (1);

	/* loop and count */
	while (head != NULL)
	{
		head = head->next;
		count++;
	}

	return (count);
}
