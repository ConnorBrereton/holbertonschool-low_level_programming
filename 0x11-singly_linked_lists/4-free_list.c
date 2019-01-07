#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_list - frees an entire linked list
 *
 * @head: pointer to first node
 *
 * Return: none
 */

void free_list(list_t *head)
{
	while (head)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}
