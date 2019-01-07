#include "lists.h"

/**
 * free_dlistint - Frees the entire DLL
 *
 * @head: Pointer to first node of DLL
 *
 * Return: none
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *cur = head;

	while (cur)
	{
		dlistint_t *next = cur->next;

		free(cur);

		cur = next;
	}
}
