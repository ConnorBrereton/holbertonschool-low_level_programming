#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * is_palindrome - Calls the recursive function
 * and returns the result of the function
 *
 * @head: Double poiner to front of linked list
 *
 * Return: 1 (palindrome) 0 (not palindrome)
 */

int is_palindrome(listint_t **head)
{
	listint_t *head_ref;

	if (!head || !*head) /* base case empty */
		return (1);

	head_ref = *head; /* reference to front */

	return (check_pal(&head_ref, *head));
}

/**
 * check_pal - Advances each pointer and evaluates the
 * values of each node
 *
 * @head: Double pointer to front of linked list
 *
 * @tail: Pointer to first value loaded into stack
 *
 * Return: 1 (palindrome) 0 (not palindrome)
 */

int check_pal(listint_t **head, listint_t *tail)
{
	if (tail->next)
	{
		if (check_pal(head, tail->next) == 0)
			return (0);
	}

	if ((*head)->n != tail->n)
		return (0);

	else
	{
		(*head) = (*head)->next;
		return (1);
	}
}
