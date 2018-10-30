#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *get_nodeint_at_index - Finds the node at an index
 *
 * @head: Pointer to first node
 * @index: Location of node to return
 *
 * Return: Value in node at index (success)
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	while (index--)
	{
		if (head != NULL)
			head = head -> next;

		else
			return (NULL);
	}

	return (head);
}
