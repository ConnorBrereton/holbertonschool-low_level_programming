#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *find_listint_loop - Finds loop in s.l.l.
 * and returns the node that starts the loop
 *
 * @head: Points to the first node in s.l.l.
 *
 * Return: Address of the node where loop starts
 */

listint_t *find_listint_loop(listint_t *head)
{
	if (!head || !*head)
		return (NULL);

	listint_t *every = *head;
	listint_t *e_other = *head;

	/* check 1: list at least 3 nodes */
	while (every && e_other && e_other->next)
	{
		every = every->next;
		e_other = e_other->next->next;

		/* check 2: match exists */
		if (every == e_other)
		{
			every = *head;

			while (every != e_other)
			{
				every = every->next;
				e_other = e_other->next;
			}

			return (every);
		}
	}
	return (NULL);
}
