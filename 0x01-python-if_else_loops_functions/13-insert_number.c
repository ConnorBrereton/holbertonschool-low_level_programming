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
		if (curr->n >= number) /* front */
		{
			new->next = curr;
			*head = new;
		}

		else /* middle */
		{
			while (curr && curr->next)
			{
				if (curr->next->n < number)
					curr = curr->next;
				else
					break;
			}
			new->next = curr->next;
			curr->next = new;
		}
	}
	else /* empty */
	{
		*head = new;
		new->next = NULL;
	}

	return (new);
}
