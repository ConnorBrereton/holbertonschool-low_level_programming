#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *find_listint_loop - Finds loop in s.l.l.
 * and returns the node that starts the loop
 *
 * @head: Points to the first node in s.l.l.
 *
 * Return: Always 0.
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *every = *head;
	listint_t *e_other = *head;

	/* check 1: size at least 3 nodes */
	while (every && e_other && e_other->next)
	{
		every = every->next;
		e_other = e_other->next->next;
		
		if (every == e_other)
		{
			return(*every);
		}
	}
	return (NULL);
}
