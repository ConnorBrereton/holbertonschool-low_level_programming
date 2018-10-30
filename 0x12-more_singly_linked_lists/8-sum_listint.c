#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * sum_listint - Calculates sum of node int values
 *
 * @head: Pointer to the first node
 *
 * Return: sum (success) 0 (fail)
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head -> next;
	}

	return (sum);
}
