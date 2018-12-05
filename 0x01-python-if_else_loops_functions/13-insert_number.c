#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *insert_node - Inserts node in sorted SLL
 *
 * @head: Double pointer to LL
 *
 * @number: Value held in node
 *
 * Return: newnode (success) NULL (failure)
 */

listint_t *insert_node(listint_t **head, int number)
{
	listint_t *new, *curr;

	if (!head)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = number;
	curr = *head;

	if (curr)
	{
		if (curr->n >= number)
		{
			new->next = curr;
			*head = new;
		}

		else /* middle */
		{
			while (curr && curr->next)
			{
				if (number >= curr->next->n)
					curr = curr->next;
				break;
			}
			new->next = curr->next;
			curr->next = new;
		}
	}
	/* empty */
	*head = new;
	new->next = NULL;

	return (new);
}
