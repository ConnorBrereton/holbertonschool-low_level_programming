#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * print_list - prints the string
 * in each node in the linked list
 *
 * @h: pointer to struct
 *
 * Return: count (success) 1 (fail)
 */

size_t print_list(const list_t *h)
{
	/* set counter */
	unsigned int count = 0;

	/* set HEAD to front of list */
	const list_t *head = h;

	/* loop through list */
	while (head != NULL)
	{
		if (head->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
		}

		else
		{
			printf("[%d] %s\n", head->len, head->str);
		}

		count++;
		head = head->next;

	}

	return (count);
}
