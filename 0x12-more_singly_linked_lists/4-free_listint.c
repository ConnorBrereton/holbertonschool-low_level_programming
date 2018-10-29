#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint - Frees entire list
 *
 * @head: Pointer to the start of the linked list
 *
 * Return: none
 */

void free_listint(listint_t *head)
{
	while (head)
	{
		free(head);
		head = head->next;
	}
}
