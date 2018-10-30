#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * pop_listint - FIFO removal
 *
 * @head: Pointer to the first node
 *
 * Return: Value in node deleted
 */

int pop_listint(listint_t **head)
{
	int val;

	listint_t *current;

	if (head == NULL || *head == NULL)
		return (0);

	val = (*head) -> n;

	current = (*head) -> next;
	free(*head);
	*head = current;

	return (val);
}	
