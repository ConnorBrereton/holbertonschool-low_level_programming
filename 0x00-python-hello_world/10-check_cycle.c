#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * check_cycle - Finds loop in s.l.l.
 *
 * @list: Points to the first node in s.l.l.
 *
 * Return: 1 (loop) 0 (no loop)
 */

int check_cycle(listint_t *list)
{
	listint_t *every = list;
	listint_t *other = list;

	while (every && other && other->next)
	{
		every = every->next;
		other = other->next->next;

		if (every == other)
			return (1);
	}
	return (0);
}
